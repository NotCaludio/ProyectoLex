%token IDENTIFICADOR 
%token ENTERO_DECIMAL HEXADECIMAL REAL_DECIMAL
%right ASIGNACION
%left '=' '<' '>' "<>" "<=" ">=" "in"
%left '+' '-' "or"
%left '*' '/' "div" "mod" "and"
%left '@' "not"
%left NEGATIVO POSITIVO

%{
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #pragma warning(disable: 4996 4273 4013 4065)
   
   extern unsigned int columna;
   extern unsigned int fila;
   extern int yylex();
   int yyerror(const char *s);
   extern FILE *yyin;
      
%}
%output "parser.cpp"
%%

/*DEFINICION DE UN BLOQUE 2.1 PAG 28*/

bloque: parte_declaracion_etiqueta
		| parte_declaracion_constante
		| parte_declaracion_tipo
		| parte_declaracion_variable
		| parte_declaracion_funciones_procedimientos
		| parte_sentencias
		;

parte_declaracion_etiqueta: "label" etiqueta ';'
						;

parte_declaracion_constante: "const" declaracion_constante
							;

parte_declaracion_tipo: "type" declaracion_tipo
						;
						
parte_declaracion_variable: "var" declaracion_variable
						;

parte_declaracion_funciones_procedimientos: declaracion_procedimientos
											| declaracion_funciones
											;

parte_sentencias: sentencias_compuestas;

etiqueta: ENTERO_DECIMAL
		|	ENTERO_DECIMAL /*Las etiquetas son del 0-9999*/ ','
		;
/**/

declaracion_tipo: IDENTIFICADOR '=' tipo ';'
				;
declaracion_variable:;
declaracion_procedimientos:;
declaracion_funciones:;
sentencias_compuestas:;
				
/*3.0 Tipos de datos pag 34*/
tipo: tipo_simple
	| tipo_estructurado
	| tipo_puntero
	;
	
tipo_simple: tipo_ordinal
			| tipo_real
			| tipo_string
			;
			
tipo_real: IDENTIFICADOR /*real*/




/**/

/*DECLARACION DE CONSTANTES 1.8 PAG 24*/
declaracion_constante: IDENTIFICADOR '=' constante ';' %prec ASIGNACION
						;

constante: IDENTIFICADOR	/*int longint real*/
		| 	signo IDENTIFICADOR
		|	numero_signo
		|	CADENA_CARACTERES
		;

signo: '+'
	|	'-'
	;
	
numero_signo: ENTERO_DECIMAL
			| HEXADECIMAL
			| REAL_DECIMAL
			;
/**/
%%

int yyerror(const char *s) 
{

   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   //printf("Error en linea %d: %s\n", linea, mensaje);
   exit( 1 ); /* Sale del programa */

   return 0;
}

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
	else 
		yyin = stdin;

   #ifdef YYDEBUG
    	yydebug = 1;
   #endif
	yyparse();
	if(archivo_abierto)
		fclose(yyin);
	return 0;
}
