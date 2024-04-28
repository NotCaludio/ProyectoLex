%{
#include <stdio.h>
#include "parser.hpp"
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4273 28251)
#define CANTIDAD_OPERADORES 22
#define CANTIDAD_NUMEROS 1000
#define CANTIDAD_CADENAS 1000  
#define CANTIDAD_PALABRAS_RESERVADAS 55
#define CANTIDAD_IDENTIFICADORES 1000

unsigned int columna =1;
unsigned int fila =1; 

struct palabra_reservada {
	char palabra[15] ="";
	unsigned int cantidad;
};
palabra_reservada arreglo_palabras[CANTIDAD_PALABRAS_RESERVADAS];

struct cadena_caracteres{
	char* cadena = 0; //es char* porque son muy variables las cadenas
	unsigned int cantidad = 0;
};	
cadena_caracteres arreglo_cadenas[CANTIDAD_CADENAS];

struct operadores{
	char operador[3]= {' ', ' ', '\0'};
	unsigned int cantidad = 0;
};	
operadores arreglo_operadores[CANTIDAD_OPERADORES];

/*estructura operadores contiene el operador en char[] y toma dos espacios,
esto porque hay operadores de mas de 1 caracter
Entonces hay un arreglo de estructuras, que contiene a todos los operadores y las veces que salen
*/

struct numero{
	char* constante_numerica = 0; //es char* porque son muy variables las constantes numericas
	unsigned int cantidad = 0;
};	
numero arreglo_numeros[CANTIDAD_NUMEROS];

struct identificador{
	char* cadena_identificador = 0; //es char* porque son muy variables las constantes numericas
	unsigned int cantidad = 0;
};	
identificador arreglo_identificadores[CANTIDAD_IDENTIFICADORES];

void contar_cantidad_palabra();
void contar_cantidad_cadena();
void contar_cantidad_operador();
void contar_cantidad_numero();
void contar_cantidad_identificador();

int regresar_numero_token_operador();
int regresar_numero_token_palabra();


%}

%option caseless
%option outfile="escaner.cpp"
%x COMENTARIO_LLAVE COMENTARIO_PARENTESIS

NO_CERO	[1-9]
DIGITOS [0-9]
SIGNO 	(\+|-)
NUMERO_ENTERO_SIN_SIGNO {NO_CERO}{DIGITOS}*
ENTERO_DECIMAL {SIGNO}?(0|{NUMERO_ENTERO_SIN_SIGNO})
HEXADECIMAL {SIGNO}?\$(0|[1-9A-F][0-9A-F]*)]
FACTOR		([eE](\+|-)?{NUMERO_ENTERO_SIN_SIGNO})
REAL_DECIMAL {SIGNO}?(0|{NUMERO_ENTERO_SIN_SIGNO})({FACTOR}|\.[0-9]+{FACTOR}?)

%%

{ENTERO_DECIMAL}	{
						//printf("(%d,%d) Entero: %s\n",fila,columna,yytext);
						contar_cantidad_numero();
						columna += yyleng;
						yylval.intVal = atoi(yytext);
						return DECIMAL_INT;
					}

{HEXADECIMAL}		{
						//printf("(%d,%d) Hexadecimal: %s\n",fila,columna,yytext);
						contar_cantidad_numero();
						columna += yyleng;
						return HEXADECIMAL;
					}
					
{REAL_DECIMAL}		{
						//printf("(%d,%d) Real: %s\n",fila,columna ,yytext);
						contar_cantidad_numero();
						columna += yyleng;
						yylval.floatVal = atof(yytext);
						return REAL_DECIMAL;
					}

[ \t]+				{
						//printf("(%d,%d) Espacios en blanco o tabuladores encontrados: %d\n",fila,columna,yyleng);
						columna += yyleng;
						
					}
[\n]+				{
						//printf("(%d,%d) Saltos de linea encontrados: %d\n",fila, columna,yyleng);
						fila+=yyleng;
						columna=1;
					}

"@"|"#"|"+"|"-"|"*"|"."					|
"/"|"<"|">"|"^"|";"|"="|","|"("     |
")"|"["|"]"|":"|"$"					{
										//printf("(%d,%d) Operador: %s\n",fila, columna,yytext);
										contar_cantidad_operador();
										columna+=yyleng;
										return *yytext;
									}
":="|".."|"<>"|"<="|">="			{
										//printf("(%d,%d) Operador: %s\n",fila, columna,yytext);
										contar_cantidad_operador();
										columna+=yyleng;
										return regresar_numero_token_operador();
									}
(\'[^\\\'\n]?\')				|
(\'([^\\\'\n]|\\.|\'\')\') 	{
								//printf("(%d,%d) Cadena Char: %s\n",fila, columna,yytext);
								contar_cantidad_cadena();
								columna+=yyleng;
								return QUOTED_CHAR;
							}
(\'([^\\\'\n]|\\.|\'\')*\') 	{
								//printf("(%d,%d) Cadena: %s\n",fila, columna,yytext);
								contar_cantidad_cadena();
								columna+=yyleng;
								return QUOTED_STRING;
							}

"program"|"begin"|"uses"|"unit"|"interface"		|
"implementation"|"label"|"const"|"type"|"real"	|
"integer"|"longint"|"word"|"char"|"boolean"		|
"true"|"false"|"string"|"packed"|"array"		|
"record"|"end"|"case"|"otherwise"				|
"of"|"set"|"var"|"forward"|"external"			|
"function"|"procedure"|"file"|"goto"|"if"		|
"then"|"else"|"repeat"|"until"|"while"|"do"		|
"for"|"to"|"downto"|"with"|"nil"|"read"			|
"readln"|"write"|"writeln"|"in"|"or"|"div"		|
"mod"|"and"|"not"		{
							//printf("(%d,%d) Reservada: %s\n",fila,columna,yytext);
							contar_cantidad_palabra();
							columna+=yyleng;
							return regresar_numero_token_palabra();
						}

[a-z][0-9a-z_]*		{
						//printf("(%d,%d) Identificador: %s\n",fila,columna,yytext);
						contar_cantidad_identificador();
						columna+=yyleng;
						return IDENTIFIER;
					}


\{					{
						//printf("(%d,%d) Comentario:",fila,columna);
						BEGIN(COMENTARIO_LLAVE);
						columna++;
					} 

\(\*				{
						BEGIN(COMENTARIO_PARENTESIS);
						columna++;
					} 

.		{
			columna++;
		}

<COMENTARIO_LLAVE>{
\{						{
							//printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\}						{
							puts("");
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{
						//printf("%s",yytext);
						fila+= yyleng;
						columna=1;
					}
[^\{|\}\n]*				{
							//printf("%s",yytext);
							columna+=yyleng;
						}

}
<COMENTARIO_PARENTESIS>{
\(\*					{
							//printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\*\)					{
							puts("");
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{
						//printf("%s",yytext);
						fila+=yyleng;
						columna=1;
					}
[^\(\*|\*\)\n]*			{
							//printf("%s",yytext);
							columna+=yyleng;
						}

}


						
						

%%

void contar_cantidad_palabra()
{
	for (int i = 0; i< CANTIDAD_PALABRAS_RESERVADAS; i++)
	{
		if(strcmp(arreglo_palabras[i].palabra,yytext) == 0) //si es 0 es que son iguales
			{
				arreglo_palabras[i].cantidad++;
				break;
			}
		else if (strcmp(arreglo_palabras[i].palabra,"") == 0 )
			{
				strncpy(arreglo_palabras[i].palabra, yytext, 14);
				arreglo_palabras[i].cantidad++;
				break;
				
			}
	}
}

void contar_cantidad_cadena()
{
	for (int i = 0; i< CANTIDAD_CADENAS; i++)
	{
		if(arreglo_cadenas[i].cadena)
			if(strcmp(arreglo_cadenas[i].cadena,yytext) == 0) //si es 0 es que son iguales
			{
				arreglo_cadenas[i].cantidad++;
				break;
			}
			else
				continue;
		else
		{
			arreglo_cadenas[i].cadena = (char*) malloc((yyleng+1) * sizeof(char));
			if(arreglo_cadenas[i].cadena)
			{
				strcpy(arreglo_cadenas[i].cadena, yytext);
				arreglo_cadenas[i].cantidad++;
			}
				
			break;
		}
	}
}

void contar_cantidad_operador()
{
	/* primero checa si existe el operador en alguna estructura del arreglo, si si le suma a la cantidad
	de lo contrario sobreescribe uno vacio para poner el operador*/
	for (int i = 0; i< CANTIDAD_OPERADORES; i++)
	{
		if(strcmp(arreglo_operadores[i].operador,yytext) == 0) //si es 0 es que son iguales
			{
				arreglo_operadores[i].cantidad++;
				break;
			}
		else if (strcmp(arreglo_operadores[i].operador,"  ") == 0 )
			{
				strncpy(arreglo_operadores[i].operador, yytext, 2);
				arreglo_operadores[i].cantidad++;
				break;
				
			}
		

	}

}

void contar_cantidad_numero()
{
	for (int i = 0; i< CANTIDAD_NUMEROS; i++)
	{
		if(arreglo_numeros[i].constante_numerica)
			if(strcmp(arreglo_numeros[i].constante_numerica,yytext) == 0) //si es 0 es que son iguales
			{
				arreglo_numeros[i].cantidad++;
				break;
			}
			else
				continue;
		else
		{
			arreglo_numeros[i].constante_numerica = (char*) malloc((yyleng+1) * sizeof(char));
			if(arreglo_numeros[i].constante_numerica)
			{
				strcpy(arreglo_numeros[i].constante_numerica, yytext);
				arreglo_numeros[i].cantidad++;
			}
				
			break;
		}
	}
}

void contar_cantidad_identificador()
{
	for (int i = 0; i< CANTIDAD_IDENTIFICADORES; i++)
	{
		if(arreglo_identificadores[i].cadena_identificador)
			if(strcmp(arreglo_identificadores[i].cadena_identificador,yytext) == 0) //si es 0 es que son iguales
			{
				arreglo_identificadores[i].cantidad++;
				break;
			}
			else
				continue;
		else
		{
			arreglo_identificadores[i].cadena_identificador = (char*) malloc((yyleng+1) * sizeof(char));
			if(arreglo_identificadores[i].cadena_identificador)
			{
				strcpy(arreglo_identificadores[i].cadena_identificador, yytext);
				arreglo_identificadores[i].cantidad++;
			}
				
			break;
		}
	}
}
int regresar_numero_token_operador()
{
	if (strcmp(yytext, ":=") == 0) return ASSIGN;
	else if (strcmp(yytext, "..") == 0) return SUBRANGE;
	else if (strcmp(yytext, "<>") == 0) return NOTEQUAL;
	else if (strcmp(yytext, "<=") == 0) return LE;
	else if (strcmp(yytext, ">=") == 0) return RE;
	return 0;
}
int regresar_numero_token_palabra()
{
	char* lowercase_yytext = strdup(yytext);
	for (int i = 0; lowercase_yytext[i]; i++) {
    	lowercase_yytext[i] = tolower(lowercase_yytext[i]);
	}
	if (strcmp(lowercase_yytext, "program") == 0) { free(lowercase_yytext); return PROGRAM_TOKEN;}
	else if (strcmp(lowercase_yytext, "begin") == 0) { free(lowercase_yytext); return BEGIN_TOKEN;}
	else if (strcmp(lowercase_yytext, "uses") == 0) { free(lowercase_yytext); return USES_TOKEN;}
	else if (strcmp(lowercase_yytext, "unit") == 0) { free(lowercase_yytext); return UNIT_TOKEN;}
	else if (strcmp(lowercase_yytext, "interface") == 0) { free(lowercase_yytext); return INTERFACE_TOKEN;}

	else if (strcmp(lowercase_yytext, "implementation") == 0) { free(lowercase_yytext); return IMPLEMENTATION_TOKEN;}
	else if (strcmp(lowercase_yytext, "label") == 0) { free(lowercase_yytext); return LABEL_TOKEN;}
	else if (strcmp(lowercase_yytext, "const") == 0) { free(lowercase_yytext); return CONST_TOKEN;}
	else if (strcmp(lowercase_yytext, "type") == 0) { free(lowercase_yytext); return TYPE_TOKEN;}
	else if (strcmp(lowercase_yytext, "real") == 0) { free(lowercase_yytext); return REAL_TOKEN;}

	else if (strcmp(lowercase_yytext, "integer") == 0) { free(lowercase_yytext); return INTEGER_TOKEN;}
	else if (strcmp(lowercase_yytext, "longint") == 0) { free(lowercase_yytext); return LONGINT_TOKEN;}
	else if (strcmp(lowercase_yytext, "word") == 0) { free(lowercase_yytext); return WORD_TOKEN;}
	else if (strcmp(lowercase_yytext, "char") == 0) { free(lowercase_yytext); return CHAR_TOKEN;}
	else if (strcmp(lowercase_yytext, "boolean") == 0) { free(lowercase_yytext); return BOOLEAN_TOKEN;}

	else if (strcmp(lowercase_yytext, "true") == 0) { free(lowercase_yytext); return TRUE_TOKEN;}
	else if (strcmp(lowercase_yytext, "false") == 0) { free(lowercase_yytext); return FALSE_TOKEN;}
	else if (strcmp(lowercase_yytext, "string") == 0) { free(lowercase_yytext); return STRING_TOKEN;}
	else if (strcmp(lowercase_yytext, "packed") == 0) { free(lowercase_yytext); return PACKED_TOKEN;}
	else if (strcmp(lowercase_yytext, "array") == 0) { free(lowercase_yytext); return ARRAY_TOKEN;}

	else if (strcmp(lowercase_yytext, "record") == 0) { free(lowercase_yytext); return RECORD_TOKEN;}
	else if (strcmp(lowercase_yytext, "end") == 0) { free(lowercase_yytext); return END_TOKEN;}
	else if (strcmp(lowercase_yytext, "case") == 0) { free(lowercase_yytext); return CASE_TOKEN;}
	else if (strcmp(lowercase_yytext, "otherwise") == 0) { free(lowercase_yytext); return OTHERWISE_TOKEN;}
	else if (strcmp(lowercase_yytext, "of") == 0) { free(lowercase_yytext); return OF_TOKEN;}

	else if (strcmp(lowercase_yytext, "set") == 0) { free(lowercase_yytext); return SET_TOKEN;}
	else if (strcmp(lowercase_yytext, "var") == 0) { free(lowercase_yytext); return VAR_TOKEN;}
	else if (strcmp(lowercase_yytext, "forward") == 0) { free(lowercase_yytext); return FORWARD_TOKEN;}
	else if (strcmp(lowercase_yytext, "external") == 0) { free(lowercase_yytext); return EXTERNAL_TOKEN;}
	else if (strcmp(lowercase_yytext, "function") == 0) { free(lowercase_yytext); return FUNCTION_TOKEN;}
	
	else if (strcmp(lowercase_yytext, "procedure") == 0) { free(lowercase_yytext); return PROCEDURE_TOKEN;}
	else if (strcmp(lowercase_yytext, "file") == 0) { free(lowercase_yytext); return FILE_TOKEN;}
	else if (strcmp(lowercase_yytext, "goto") == 0) { free(lowercase_yytext); return GOTO_TOKEN;}
	else if (strcmp(lowercase_yytext, "if") == 0) { free(lowercase_yytext); return IF_TOKEN;}
	else if (strcmp(lowercase_yytext, "then") == 0) { free(lowercase_yytext); return THEN_TOKEN;}

	else if (strcmp(lowercase_yytext, "else") == 0) { free(lowercase_yytext); return ELSE_TOKEN;}
	else if (strcmp(lowercase_yytext, "repeat") == 0) { free(lowercase_yytext); return REPEAT_TOKEN;}
	else if (strcmp(lowercase_yytext, "until") == 0) { free(lowercase_yytext); return UNTIL_TOKEN;}
	else if (strcmp(lowercase_yytext, "while") == 0) { free(lowercase_yytext); return WHILE_TOKEN;}
	else if (strcmp(lowercase_yytext, "do") == 0) { free(lowercase_yytext); return DO_TOKEN;}

	else if (strcmp(lowercase_yytext, "for") == 0) { free(lowercase_yytext); return FOR_TOKEN;}
	else if (strcmp(lowercase_yytext, "to") == 0) { free(lowercase_yytext); return TO_TOKEN;}
	else if (strcmp(lowercase_yytext, "downto") == 0) { free(lowercase_yytext); return DOWNTO_TOKEN;}
	else if (strcmp(lowercase_yytext, "with") == 0) { free(lowercase_yytext); return WITH_TOKEN;}
	else if (strcmp(lowercase_yytext, "nil") == 0) { free(lowercase_yytext); return NIL_TOKEN;}

	else if (strcmp(lowercase_yytext, "read") == 0) { free(lowercase_yytext); return READ_TOKEN;}
	else if (strcmp(lowercase_yytext, "readln") == 0) { free(lowercase_yytext); return READLN_TOKEN;}
	else if (strcmp(lowercase_yytext, "write") == 0) { free(lowercase_yytext); return WRITE_TOKEN;}
	else if (strcmp(lowercase_yytext, "writeln") == 0) { free(lowercase_yytext); return WRITELN_TOKEN;}
	else if (strcmp(lowercase_yytext, "in") == 0) { free(lowercase_yytext); return IN_TOKEN;}

	else if (strcmp(lowercase_yytext, "or") == 0) { free(lowercase_yytext); return OR_TOKEN;}
	else if (strcmp(lowercase_yytext, "div") == 0) { free(lowercase_yytext); return DIV_TOKEN;}
	else if (strcmp(lowercase_yytext, "mod") == 0) { free(lowercase_yytext); return MOD_TOKEN;}
	else if (strcmp(lowercase_yytext, "and") == 0) { free(lowercase_yytext); return AND_TOKEN;}
	else if (strcmp(lowercase_yytext, "not") == 0) { free(lowercase_yytext); return NOT_TOKEN;}
	return 0;
}

int yywrap(void) 
{
	FILE * palabras_reservadas = fopen("palabras_reservadas.csv", "wt");
	if (!palabras_reservadas)
		printf("No se pudo abrir el archivo de palabras_reservadas");
	else
	{
		for(int i = 0; i < CANTIDAD_OPERADORES; i++)
			if(strcmp(arreglo_palabras[i].palabra,"") == 0)
				continue;
			else
				fprintf(palabras_reservadas,"%d,%s,%d\n",i,arreglo_palabras[i].palabra,arreglo_palabras[i].cantidad);
		fclose(palabras_reservadas);
	}
	
	FILE* constantes_cadenas = fopen("constantes_cadenas.csv", "wt");
	if (!constantes_cadenas)
	    printf("No se pudo abrir el archivo de constantes_cadenas");
	else 
	{
	    for (int i = 0; i < CANTIDAD_CADENAS; i++)
		if(arreglo_cadenas[i].cadena)
		{
	        fprintf(constantes_cadenas, "%d,%s,%d\n", i, arreglo_cadenas[i].cadena, arreglo_cadenas[i].cantidad);
			free(arreglo_cadenas[i].cadena);
		}
		else
			break;
		fclose(constantes_cadenas);
	}
	
	FILE * caracteres_especiales = fopen("caracteres_especiales.csv", "wt");
	if (!caracteres_especiales)
		printf("No se pudo abrir el archivo de caracteres_especiales");
	else
	{
		for(int i = 0; i < CANTIDAD_OPERADORES; i++)
			if(strcmp(arreglo_operadores[i].operador,"  ") == 0)
				continue;
			else
				if(strcmp(arreglo_operadores[i].operador,",") ==0)
					fprintf(caracteres_especiales,"%d,%s,%d\n",i,"comma",arreglo_operadores[i].cantidad);
				else
					fprintf(caracteres_especiales,"%d,%s,%d\n",i,arreglo_operadores[i].operador,arreglo_operadores[i].cantidad);
		fclose(caracteres_especiales);
	}
	FILE * constantes_numericas = fopen("constantes_numericas.csv", "wt");
	if (!constantes_numericas)
		printf("No se pudo abrir el archivo de constantes_numericas");
	else
	{
		for(int i = 0; i < CANTIDAD_NUMEROS; i++)
		if(arreglo_numeros[i].constante_numerica)
		{
			fprintf(constantes_numericas,"%d,%s,%d\n",i,arreglo_numeros[i].constante_numerica,arreglo_numeros[i].cantidad);
			free(arreglo_numeros[i].constante_numerica);
		}
		else
			break;
		fclose(constantes_numericas);
	}
	FILE * identificadores = fopen("identificadores.csv", "wt");
	if (!identificadores)
		printf("No se pudo abrir el archivo de identificadores");
	else
	{
		for(int i = 0; i < CANTIDAD_IDENTIFICADORES; i++)
		if(arreglo_identificadores[i].cadena_identificador)
		{
			fprintf(identificadores,"%d,%s,%d\n",i,arreglo_identificadores[i].cadena_identificador,arreglo_identificadores[i].cantidad);
			free(arreglo_identificadores[i].cadena_identificador);
		}
		else
			break;
		fclose(identificadores);
	}
   return 1;
}


/*
int main(int argc, char * argv[])
{
	char archivo_abierto = 0;
	if (argc > 1)
	{
		++argv; //apunta al siguiente elemento del arreglo
		yyin = fopen(argv[0], "rt");
		archivo_abierto = 1;
		if (!yyin)
		{
			printf("Archivo %s no puede ser abierto. Entrada tradicional.\n", argv[0]);
			yyin = stdin;
			archivo_abierto = 0;
		}		
	}
	
	yylex();
	if(archivo_abierto)
		fclose(yyin);

}*/