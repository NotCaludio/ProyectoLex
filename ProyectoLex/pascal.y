%token ENTERO_DECIMAL HEXADECIMAL REAL_DECIMAL IDENTIFICADOR CADENA_CARACTERES
%right ASIGNACION
%left '=' '<' '>' "<>" "<=" ">=" "in"
%left '+' '-' "or"
%left '*' '/' "div" "mod" "and"
%left '@' "not"
%left NEGATIVO POSITIVO

%{
   #include <stdio.h>
   #include <string.h>
   #pragma warning(disable: 4996 6385 4273 4013 4065)
   
   extern unsigned int columna;
   extern unsigned int fila;
   extern int yylex();
   int yyerror(const char *s);
   extern FILE *yyin;
      
%}
%union
{
    int valor_entero;
    char cadena_de_caracteres[256];
}

%output "parser.cpp"
%%
declaracion_constante: IDENTIFICADOR '=' constante ';' %prec ASIGNACION {printf("Gramatica aceptada"}
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
