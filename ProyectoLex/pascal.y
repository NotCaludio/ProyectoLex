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
%left '=' '<' '>' NOTEQUAL"<>" LE"<=" RE">=" "in"
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
/*el sufijo list significa que itera o que es una lista de opcinoes*/
/*en algunas reglas salte unos no terminales que derivan directo en identificadores*/
%%

/*PROGRAMS CHAPTER 8 */
pascal: program {printf("Successful program");}
		| regular_unit {printf("Successful program");};
program: program_heading ';' block		
		| program_heading ';' uses_clause ';' block  ;
program_heading: PROGRAM_TOKEN IDENTIFIER
				| PROGRAM_TOKEN IDENTIFIER '(' program_parameters ')';
program_parameters: identifier_list;
uses_clause: USES_TOKEN identifier_list;

/*Chapter 1*/

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
constant: constant_identifier{ /*constant_identifier este es cualquier constante identifier*/	}
		| sign constant_identifier /*constant_identifier verificar el tipo de identifier int longint real con una accion semantica*/
		| DECIMAL_INT
		| HEXADECIMAL
		| REAL_DECIMAL
		| QUOTED_STRING
		| QUOTED_CHAR;
constant_identifier: IDENTIFIER; /*como mas reglas usan constant identifier, poner un lugar para verificar identifier*/

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

procedure_and_function_declaration_part: procedure_and_function_declaration_list
										| /*empty*/;
procedure_and_function_declaration_list: procedure_and_function_declaration_list procedure_and_function_declaration
										| procedure_and_function_declaration;
procedure_and_function_declaration: procedure_declaration
								|	function_declaration;

statement_part: compound_statement;

sign: '+'
	| '-';
identifier_list: identifier_list ',' IDENTIFIER
				| IDENTIFIER;

/*Chapter 3 Data types*/

type: simple_type
	| structured_type
	| pointer_type
	| IDENTIFIER;

/**********************************SIMPLE TYPE*****************************/
simple_type: ordinal_type
			| real_type
			| string_type; 

ordinal_type: subrange_type
			| enumerated_type
			| ordinal_type_identifier;  /*tipo ordinal
							lo iba a modificar para que type tenga solo identifier pero veo que otras reglas usan esta gramatica entonces la dejo asi
							va a provocar un problema reduce reduce*/
ordinal_type_identifier: INTEGER_TOKEN | LONGINT_TOKEN | CHAR_TOKEN | BOOLEAN_TOKEN;
enumerated_type: '(' identifier_list ')';
subrange_type: constant SUBRANGE constant; /*verificar que estan en orden ascendente S/R1*/

real_type: real_type_identifier
real_type_identifier: REAL_TOKEN ; /*tipo real*/

string_type: STRING_TOKEN '[' DECIMAL_INT ']'  /*verificar que decimal int no tenga signo UNSIGNED-INTEGER*/
			/*| IDENTIFIER*/; /*tipo string*/

/***************************e**** STRUCTURED TYPE **************************/

structured_type: PACKED_TOKEN  type_list /*packed no afecta a file ni set*/
				| type_list				
				/*| IDENTIFIER*/;	/*de tipo estructurado*/
type_list: array_type
		| set_type
		| file_type
		| record_type;


array_type: ARRAY_TOKEN '[' index_type_list ']' OF_TOKEN type; /*que pueda haber varios indices es para un array de arrays*/
index_type_list: index_type_list ',' ordinal_type /* tiene que ser orden ascendente y no mayor a int*/
				| ordinal_type;


record_type: RECORD_TOKEN END_TOKEN
			| RECORD_TOKEN field_list END_TOKEN; /*son los tipos de datos como el union de bison*/
field_list: fixed_part
			| fixed_part ';'
			| fixed_part ';' variant_part 
			| fixed_part ';' variant_part ';'
			| variant_part
			| variant_part ';';
fixed_part: fixed_part ';' field_declaration
			| field_declaration;
field_declaration: identifier_list ':' type;

variant_part: CASE_TOKEN tag_field_type OF_TOKEN variant_list /*para crear casos de tipos de dato*/
			| CASE_TOKEN IDENTIFIER ':' tag_field_type OF_TOKEN variant_list;
variant_list: variant_list ';' variant;
			| variant;
variant: constant_list ':' '(' ')'
		| constant_list ':' '(' field_list ')';
constant_list: constant_list ',' constant
			| constant;
tag_field_type: IDENTIFIER; /*ordinal type*/


set_type: SET_TOKEN OF_TOKEN ordinal_type; /*que no sea mayor a 4088 o 0..4087*/
file_type: FILE_TOKEN
		| OF_TOKEN type;

/**************************************POINTER TYPE *************************/

pointer_type: '^' base_type /*un identificaodr base_type: type_identifier*/
			| pointer_type_identifier; /* un identificador del tipo puntero*/
pointer_type_identifier: NIL_TOKEN;
base_type: IDENTIFIER; /*identifier del tipo type, osea la base char int etc*/

/*CHAPTER 4 VARIABLES*/

variable_reference: variable_identifier qualifier_list
				/*| variable_identifier*/;
variable_identifier: IDENTIFIER;  /*identifier sin mas*/
					
qualifier_list: qualifier_list qualifier
				| qualifier;
qualifier: index
		| field_designator
		|'^';
		/*| file_buffer_symbol
		| pointer_object_symbol*/;

index: '[' expression_list ']';
expression_list: expression_list ',' expression;
				| expression;

field_designator: '.' IDENTIFIER;
file_buffer_symbol: '^';
pointer_object_symbol: '^'; /*esto me va a ocasionar un problema reduce reduce*/

/* EXPRESSIONS CHAPTER 5*/

unsigned_constant: unsigned_number
				| QUOTED_STRING
				/*| constant_identifier*/
				| NIL_TOKEN;
unsigned_number: DECIMAL_INT	/*en todos verificar que sea positivo porque sino no es unsigned*/
				| HEXADECIMAL
				| REAL_DECIMAL; 

factor: variable_reference
		| '@' variable_reference
		| unsigned_constant
		| function_call
		| set_constructor
		| '(' expression ')'
		| NOT_TOKEN factor
		| IDENTIFIER;

term: term term_operator_list  factor
	| factor;
term_operator_list: '*' | '/' | DIV_TOKEN | MOD_TOKEN | AND_TOKEN;

simple_expression: sign simple_expression_term_operator_iterable 
				| simple_expression_term_operator_iterable 
simple_expression_term_operator_iterable: simple_expression_term_operator_iterable simple_expression_term_operator_list term
										| term;
simple_expression_term_operator_list: '+' | '-' | OR_TOKEN;

expression: simple_expression
			| simple_expression relational_operator simple_expression;
relational_operator: '=' | '<' | '>' | LE | RE | NOTEQUAL | IN_TOKEN;

function_call: /*function_identifier
			|*/ function_identifier actual_parameter_list;
function_identifier: IDENTIFIER; /*nada mas es su nombre de la funcion dbe existir*/

actual_parameter_list: '(' actual_parameter_iterable ')';
actual_parameter_iterable: actual_parameter_iterable ',' actual_parameter
						| actual_parameter;
actual_parameter: expression
				/*| variable_reference*/
				/*| procedure_identifier
				| function_identifier*/;
procedure_identifier: IDENTIFIER /*solo el nombre*/;

set_constructor: '[' ']'
				| '[' member_group_list ']';
member_group_list: member_group_list ',' member_group
				| member_group;

member_group: expression
			| expression SUBRANGE expression;

/*STATEMENTS CHAPTER 6*/

statement: /*al parecer es vacio pero no estoy seguro*/ 
		| label ':' 
		| label ':' simple_statement
		| label ':' structured_statement
		| simple_statement
		| structured_statement;
/******************************* SIMPLE STATEMENT ****************************************************/
simple_statement: assignment_statement
				| procedure_statement
				| goto_statement;
/**************************** ASSIGNMENT STATEMENT **************************************************/
assignment_statement: variable_reference ASSIGN expression
					| function_identifier ASSIGN expression;

/**************************** PROCEDURE STATEMENT **************************************************/
procedure_statement: procedure_identifier
					| procedure_identifier actual_parameter_list;

/**************************** GOTO STATEMENT **************************************************/
goto_statement: GOTO_TOKEN label;

/**************************** STRUCTURED STATEMENT ********************************************/
structured_statement: compound_statement
					| conditional_statement
					| repetitive_statement
					| with_statement;

/*compound statement*/

compound_statement: BEGIN_TOKEN statement_list END_TOKEN {printf("regla compound_statement\n")};
statement_list: statement_list ';' statement
			| statement;

/*conditional_statement*/
conditional_statement: if_statement
					| case_statement;

/*************************** IF STATEMENT ****************************************************/

if_statement: IF_TOKEN expression THEN_TOKEN statement
			| IF_TOKEN expression THEN_TOKEN statement ELSE_TOKEN statement;

case_statement: CASE_TOKEN expression OF_TOKEN case_list END_TOKEN
				| CASE_TOKEN expression OF_TOKEN case_list otherwise_clause END_TOKEN
				| CASE_TOKEN expression OF_TOKEN case_list otherwise_clause ';' END_TOKEN;
				| CASE_TOKEN expression OF_TOKEN case_list ';' END_TOKEN;
case_list: case_list ',' case
		| case;
case: constant_list ':' statement;
otherwise_clause: ';' OTHERWISE_TOKEN statement;

repetitive_statement: repeat_statement
					| while_statement
					| for_statement;

/************************ REPEAT_STATEMENT **********************************************/
repeat_statement: REPEAT_TOKEN statement_list UNTIL_TOKEN expression;

/************************ WHILE_STATEMENT **********************************************/
while_statement: WHILE_TOKEN expression DO_TOKEN statement;
/************************ FPR_STATEMENT **********************************************/
for_statement: FOR_TOKEN control_variable ASSIGN initial_value TO_TOKEN final_value DO_TOKEN statement
			| FOR_TOKEN control_variable ASSIGN initial_value DOWNTO_TOKEN final_value DO_TOKEN statement;
control_variable: IDENTIFIER; /*variable identifier*/
initial_value: expression;
final_value: expression;
/************************ WITH_STATEMENT **********************************************/
with_statement: WITH_TOKEN record_variable_reference_list DO_TOKEN statement;
record_variable_reference_list: record_variable_reference_list ',' variable_reference /*of type record*/
								| variable_reference;


/*PROCEDURES AND FUNCTIONS CHAPTER 7*/

/******************************* PROCEDURE DECLARATION **************************************************/
procedure_declaration: procedure_heading ';' procedure_body ';';
procedure_body: block
				| FORWARD_TOKEN
				| EXTERNAL_TOKEN;
procedure_heading: PROCEDURE_TOKEN IDENTIFIER
				| PROCEDURE_TOKEN IDENTIFIER formal_parameter_list;

/******************************* FUNCTION DECLARATION **************************************************/
function_declaration: function_heading ';' function_body ';';
function_body: block
			|	FORWARD_TOKEN
			| EXTERNAL_TOKEN;
function_heading: FUNCTION_TOKEN IDENTIFIER ':' IDENTIFIER/*result_type*/
				| FUNCTION_TOKEN IDENTIFIER formal_parameter_list ':' IDENTIFIER/*result_type*/;
result_type: ordinal_type_identifier
			| real_type_identifier
			| pointer_type_identifier;
formal_parameter_list : '(' formal_parameter_list_iterable ')';
formal_parameter_list_iterable: formal_parameter_list_iterable ';' formal_parameter_list_iterable_list
							| formal_parameter_list_iterable_list
formal_parameter_list_iterable_list: parameter_declaration
									| procedure_heading	
									| function_heading;
parameter_declaration: VAR_TOKEN identifier_list ':' type_identifier
					| identifier_list ':' type_identifier;
type_identifier: IDENTIFIER; /*del tipo type 
							type charray = array [ O •• 255] of Char; 
							charray es un identifier del tipo array char */

/*UNIT CHAPTER 9*/

regular_unit: unit_heading ';' interface_part implementation_part END_TOKEN '.';
unit_heading: UNIT_TOKEN IDENTIFIER;
interface_part: INTERFACE_TOKEN uses_clause_empty constant_declaration_part
 type_declaration_part variable_declaration_part procedure_and_function_declaration_part;

uses_clause_empty: uses_clause | ;

implementation_part: IMPLEMENTATION_TOKEN constant_declaration_part type_declaration_part
 variable_declaration_part procedure_and_function_declaration_part {printf("regla WAZ\n")};



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
