%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4273 28251)
#define CANTIDAD_OPERADORES 22
#define CANTIDAD_NUMEROS 1000
#define CANTIDAD_CADENAS 1000  
#define CANTIDAD_PALABRAS_RESERVADAS 26

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

%}

%option caseless
%option noyywrap
%option outfile="escaner.cpp"
%x COMENTARIO_LLAVE COMENTARIO_PARENTESIS

ENTERO_DECIMAL (\+|-)?(0|[1-9][0-9]*)
HEXADECIMAL (\+|-)?\$(0|[1-9A-F][0-9A-F]*)
REAL_DECIMAL (\+|-)?(0|[1-9][0-9]*)\.[0-9]+([eE](\+|-)?[1-9][0-9]*)?

%%

{ENTERO_DECIMAL}	{
						printf("Entero: %s\n",yytext);
						contar_cantidad_numero();
					}

{HEXADECIMAL}		{
						printf("Hexadecimal: %s\n",yytext);
						contar_cantidad_numero();
					}
					
{REAL_DECIMAL}		{
						printf("Real: %s\n",yytext);
						contar_cantidad_numero();
					}

[ \t]+				{
						printf("(%d,%d) Espacios en blanco encontrados: %d\n",fila,columna,yyleng);
						columna += yyleng;
						
					}
[\n]+				{
						printf("(%d,%d)Saltos de linea encontrados: %d\n",fila, columna,yyleng);
						fila+=yyleng;
						columna=1;
					}

"@"|"#"|"<>"|"<="|">="|"+"|"-"|"*"	|
"/"|"<"|">"|"^"|";"|"="|","|"("     |
")"|"["|"]"|":"|":="|".."			{
										contar_cantidad_operador();
									}

\'([^\\\'\n]|\\.|\'\')*\' 	{
								printf("Cadena: %s\n", yytext);
								contar_cantidad_cadena();
								
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
							printf("Reservada: %s\n",yytext);
							contar_cantidad_palabra();
						}




\{					{
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
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\}						{
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{
						fila+= yyleng;
						columna=1;
					}
.						{
							columna++;
						}

}
<COMENTARIO_PARENTESIS>{
\(\*					{
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\*\)					{
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{
						fila+=yyleng;
						columna=1;
					}
.						{
							ECHO;
							columna++;
						}

}


						
						

%%


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
		
	for(int i = 0; i < CANTIDAD_OPERADORES; i++)
	if(strcmp(arreglo_operadores[i].operador,"  ") == 0)
		continue;
	else
		printf("Caracter %s: %d\n",arreglo_operadores[i].operador,arreglo_operadores[i].cantidad);	
	
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
}