%union {
	unsigned int unsignedIntVal;
    int intVal;
    float floatVal;
    char *pCharVal;
}
%token <intVal>DECIMAL_INT HEXADECIMAL REAL_DECIMAL IDENTIFIER QUOTED_STRING QUOTED_CHAR
PROGRAM_TOKEN"program" BEGIN_TOKEN"begin" USES_TOKEN"uses" UNIT_TOKEN"unit" INTERFACE_TOKEN"interface"		
IMPLEMENTATION_TOKEN"implementation" LABEL_TOKEN"label" CONST_TOKEN"const" TYPE_TOKEN"type" REAL_TOKEN"real"
	
INTEGER_TOKEN"integer" LONGINT_TOKEN"longint" WORD_TOKEN"word" CHAR_TOKEN"char" BOOLEAN_TOKEN"boolean"		
TRUE_TOKEN "true"  FALSE_TOKEN"false" STRING_TOKEN"string" PACKED_TOKEN"packed" ARRAY_TOKEN"array"		
RECORD_TOKEN"record" END_TOKEN"end" CASE_TOKEN"case" OTHERWISE_TOKEN"otherwise"				
OF_TOKEN"of" SET_TOKEN"set" VAR_TOKEN"var" FORWARD_TOKEN"forward" EXTERNAL_TOKEN"external"			
FUNCTION_TOKEN"function" PROCEDURE_TOKEN"procedure" FILE_TOKEN"file" GOTO_TOKEN"goto" IF_TOKEN"if"		
THEN_TOKEN"then" ELSE_TOKEN"else" REPEAT_TOKEN"repeat" UNTIL_TOKEN"until" WHILE_TOKEN"while" DO_TOKEN"do"
FOR_TOKEN"for" TO_TOKEN"to" DOWNTO_TOKEN"downto" WITH_TOKEN"with" NIL_TOKEN"nil" READ_TOKEN"read"			
READLN_TOKEN"readln" WRITE_TOKEN"write" WRITELN_TOKEN"writeln" IN_TOKEN"in" OR_TOKEN"or"  DIV_TOKEN"div"		
MOD_TOKEN"mod" AND_TOKEN"and" NOT_TOKEN"not" 
 
%right ASSIGNMENT_PRECEDENCE
%token ASSIGN":=" SUBRANGE".."
%left '=' '<' '>' COMP"<>" LEFT"<=" RIGHT">=" "in"
%left '+' '-' "or"
%left '*' '/' "div" "mod" "and"
%left '@' "not"
%left NEGATIVE POSITIVE

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

%output "parser.cpp"
%%

block : label_declaration_part
        constant_declaration_part
        type_declaration_part
        variable_declaration_part
        procedure_and_function_declaration_part
        statement_part;

label_declaration_part: LABEL_TOKEN label_list ';'
					| /*empty*/ ;
label_list: label_list ',' label
			| label;
label: DECIMAL_INT {		
						if ($1 < 0 || $1 > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					}

constant_declaration_part: CONST_TOKEN constant_declaration_list
						| /*empty*/;
constant_declaration_list: constant_declaration_list  constant_declaration
						| constant_declaration ;
constant_declaration: IDENTIFIER '=' constant ';'; 
constant: IDENTIFIER{ /*verificar el tipo de identifier int longint real con una accion semantica*/	}
		| sign IDENTIFIER
		| DECIMAL_INT
		| HEXADECIMAL
		| REAL_DECIMAL
		| QUOTED_STRING
		| QUOTED_CHAR;
sign: '+'
	| '-';

type_declaration_part: TYPE_TOKEN type_declaration_list
					| /*empty*/;
type_declaration_list: type_declaration_list  type_declaration
					|type_declaration;
type_declaration: IDENTIFIER '=' type ';';
	
variable_declaration_part: VAR_TOKEN variable_declaration_list /*verificar que no se hayan  usado los identificadores antes*/
						| /*emmpty*/;
variable_declaration_list: variable_declaration_list variable_declaration
						| variable_declaration;
variable_declaration: identifier_list ':' type ';';

identifier_list: identifier_list ',' IDENTIFIER
				| IDENTIFIER;

procedure_and_function_declaration_part:;
statement_part:;



%%

int yyerror(const char *s) 
{

   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   printf("Error en linea %d columna %d: %s\n", fila,columna, mensaje);
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

   //#ifdef YYDEBUG
   // 	yydebug = 1;
   //#endif
	yyparse();
	if(archivo_abierto)
		fclose(yyin);
	return 0;
}
