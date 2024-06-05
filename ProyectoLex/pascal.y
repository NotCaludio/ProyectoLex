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

%destructor {free ($$); } IDENTIFIER

%{
   #include <stdio.h>
   #include <string.h>
   #pragma warning(disable: 4996 6385 4273 4013 4065)
   
   extern unsigned int columna;
   extern unsigned int fila;
   extern int yylex(void);
   int yyerror(const char *s);
   extern FILE *yyin;
      
%}

%output "parser.cpp"
/*el sufijo list significa que itera o que es una lista de opcinoes*/
/*en algunas reglas salte unos no terminales que derivan directo en identificadores*/
/*RE es una regla extra que se añadio para quitar los reduce reduce*/
%%

/*PROGRAMS CHAPTER 8 */
pascal: program {printf("Successful program\n");}
		| regular_unit {printf("Successful program\n");};

program: program_heading ';' block	'.'	{printf("regla program1\n")}
		| program_heading ';' uses_clause ';' block  '.' {printf("regla program2\n")} ;

/* tenia el punto y coma extra lo quite (miranda)*/
program_heading: PROGRAM_TOKEN IDENTIFIER{printf("regla program_heading1\n")}
				| PROGRAM_TOKEN IDENTIFIER '(' program_parameters ')'{printf("regla program_heading2\n")};


program_parameters: identifier_list{printf("regla program_parameters1\n")};

uses_clause: USES_TOKEN identifier_list {printf("regla uses_clause\n")};

/*Chapter 1*/

block :  label_declaration_part
        constant_declaration_part
        type_declaration_part
        variable_declaration_part  {printf("regla variable_declaration_part_block1\n")}
        procedure_and_function_declaration_part  {printf("regla procedure_and_function_declaration_part_block1\n")}
        statement_part {printf("regla block1\n")}
		 ;



label_declaration_part: LABEL_TOKEN label_list ';'{printf("regla label_declaration_part1\n")}
					| /*empty*/ {printf("regla label_declaration_part2\n")};
label_list: label_list ',' label{printf("regla label_list1\n")}
			| label{printf("regla label_list2\n")};
label: DECIMAL_INT {		
						if ($1 < 0 || $1 > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					}{printf("regla label1\n")};

constant_declaration_part: CONST_TOKEN constant_declaration_list{printf("regla constant_declaration_part1\n")}
						| /*empty*/{printf("regla constant_declaration_part2\n")};
constant_declaration_list: constant_declaration_list  constant_declaration{printf("regla constant_declaration_list1\n")}
						| constant_declaration{printf("regla constant_declaration_list2\n")} ;


constant_declaration: IDENTIFIER '=' constant ';'{printf("regla constant_declaration1\n")}; 
constant: constant_identifier{ /*constant_identifier este es cualquier constante identifier*/	}{printf("regla constant1\n")}
		| sign constant_identifier{printf("regla constant2\n")} /*constant_identifier verificar el tipo de identifier int longint real con una accion semantica*/
		| signed_number{printf("regla constant3\n")}
		| '#' signed_number{printf("regla constant4\n")}
		| QUOTED_STRING{printf("regla constant5\n")}
		| QUOTED_CHAR{printf("regla constant6\n")};

constant_identifier: IDENTIFIER{printf("regla constant_identifier1\n")};/*como mas reglas usan constant identifier, poner un lugar para verificar identifier*/

type_declaration_part: TYPE_TOKEN type_declaration_list{printf("regla type_declaration_part1\n")}
					| /*empty*/{printf("regla type_declaration_part2\n")};
type_declaration_list: type_declaration_list  type_declaration{printf("regla type_declaration_list1\n")}
					|type_declaration{printf("regla type_declaration_list2\n")};


type_declaration: IDENTIFIER '=' type ';'{printf("regla type_declaration1\n")};
	
variable_declaration_part: VAR_TOKEN variable_declaration_list {printf("regla variable_declaration_part1\n")}/*verificar que no se hayan  usado los identificadores antes*/
						| /*emmpty*/{printf("regla variable_declaration_part2\n")};
variable_declaration_list: variable_declaration_list variable_declaration{printf("regla variable_declaration_list1\n")}
						| variable_declaration{printf("regla variable_declaration_list2\n")};
						
variable_declaration: identifier_list ':' type ';'{printf("regla variable_declaration1\n")};

procedure_and_function_declaration_part: procedure_and_function_declaration_list{printf("regla procedure_and_function_declaration_part1\n")}
										| /*empty*/{printf("regla procedure_and_function_declaration_part2\n")};
procedure_and_function_declaration_list: procedure_and_function_declaration_list procedure_and_function_declaration{printf("regla procedure_and_function_declaration_list1\n")}
										| procedure_and_function_declaration{printf("regla procedure_and_function_declaration_list2\n")};
procedure_and_function_declaration: procedure_declaration{printf("regla procedure_and_function_declaration1\n")}
								|	function_declaration{printf("regla procedure_and_function_declaration2\n")};

statement_part: compound_statement{printf("regla statement_part1\n")}
			| {printf("regla statement_part2\n")}	;

sign: '+'{printf("regla sign1\n")}
	| '-'{printf("regla sign2\n")};

identifier_list: identifier_list ',' IDENTIFIER{printf("regla identifier_list1\n")}
				| IDENTIFIER{printf("regla identifier_list2\n")};

/*Chapter 3 Data types*/

type: simple_type{printf("regla type1\n")}
	| structured_type{printf("regla type2\n")}
	| pointer_type{printf("regla type3\n")}
	| IDENTIFIER{printf("regla type4\n")}; /*RE*/

/**********************************SIMPLE TYPE*****************************/
simple_type: ordinal_type{printf("regla simple_type1\n")}
			| real_type{printf("regla simple_type2\n")}
			| string_type{printf("regla simple_type3\n")}; 

ordinal_type: subrange_type{printf("regla ordinal_type1\n")}
			| enumerated_type{printf("regla ordinal_type2\n")}
			| ordinal_type_identifier{printf("regla ordinal_type3\n")};
			
			/*tipo ordinal
							lo iba a modificar para que type tenga solo identifier pero veo que otras reglas usan esta gramatica entonces la dejo asi
							va a provocar un problema reduce reduce*/

ordinal_type_identifier: INTEGER_TOKEN {printf("regla ordinal_type_identifier1\n")}
 | LONGINT_TOKEN{printf("regla ordinal_type_identifier2\n")}
  | CHAR_TOKEN {printf("regla ordinal_type_identifier3\n")}
  | BOOLEAN_TOKEN{printf("regla ordinal_type_identifier4\n")}
  | function_call{printf("regla ordinal_type_identifier5\n")} /*super modificado para que sirva en dirdemo*/
 | WORD_TOKEN{printf("regla ordinal_type_identifier6\n")};

type_boolean: TRUE_TOKEN {printf("regla type_boolean1\n")}
			| FALSE_TOKEN {printf("regla type_boolean2\n")};

enumerated_type: '(' identifier_list ')'{printf("regla enumerated_type1\n")};

subrange_type: constant SUBRANGE constant{printf("regla subrange_type1\n")}; /*verificar que estan en orden ascendente S/R1*/

real_type: real_type_identifier{printf("regla real_type1\n")}; /*tipo real*/
real_type_identifier: REAL_TOKEN {printf("regla real_type_identifier1\n")}; /*tipo real*/

string_type: STRING_TOKEN '[' DECIMAL_INT ']'  {printf("regla string_type1\n")} /*1byte de size*/
			| STRING_TOKEN '[' IDENTIFIER ']'{printf("regla string_type2\n")} /*hay variables que son int*/
/*verificar que decimal int no tenga signo UNSIGNED-INTEGER*/
			/*| IDENTIFIER*/; /*tipo string*/

/***************************e**** STRUCTURED TYPE **************************/

structured_type: PACKED_TOKEN  type_list {printf("regla structured_type1\n")}/*packed no afecta a file ni set*/
				| type_list				{printf("regla structured_type2\n")}	/*| IDENTIFIER*/;	/*de tipo estructurado*/

type_list: array_type{printf("regla type_list1\n")}
		| set_type{printf("regla type_list2\n")}
		| file_type{printf("regla type_list3\n")}
		| record_type{printf("regla type_list4\n")};


array_type: ARRAY_TOKEN '[' index_type_list ']' OF_TOKEN type{printf("regla array_type\n")}; /*que pueda haber varios indices es para un array de arrays*/
index_type_list: index_type_list ',' ordinal_type_expression {printf("regla index_type_list1\n")}/* tiene que ser orden ascendente y no mayor a int*/
				| ordinal_type_expression{printf("regla index_type_list2\n")};

ordinal_type_expression: ordinal_type{printf("regla ordinal_type_expression1\n")}
						| ordinal_type term_operator_list signed_number_expression_list{printf("regla ordinal_type_expression2\n")}
						| ordinal_type sign unsigned_number_expression_list{printf("regla ordinal_type_expression3\n")}; /*agregado para las operaciones*/

signed_number_expression_list: signed_number_expression_list  term_operator_list signed_number {printf("regla signed_number_expression_list1\n")}
						| signed_number {printf("regla signed_number_expression_list2\n")};		/*agregado para que pueda hacer sumas y restas*/
unsigned_number_expression_list: unsigned_number_expression_list sign unsigned_number{printf("regla unsigned_number_expression_list1\n")}
								| unsigned_number{printf("regla signed_number_expression_list2\n")};

record_type: RECORD_TOKEN END_TOKEN{printf("regla record_type1\n")}
			| RECORD_TOKEN field_list END_TOKEN{printf("regla record_type2\n")}; /*son los tipos de datos como el union de bison*/

field_list: fixed_part{printf("regla field_list1\n")}
			| fixed_part ';'{printf("regla field_list2\n")}
			| fixed_part ';' variant_part {printf("regla field_list3\n")}
			| fixed_part ';' variant_part ';'{printf("regla field_list4\n")}
			| variant_part{printf	("regla field_list5\n")}
			| variant_part ';'{printf("regla field_list6\n")};


fixed_part: fixed_part ';' field_declaration{printf("regla fixed_part1\n")}
			| field_declaration{printf("regla fixed_part2\n")};
field_declaration: identifier_list ':' type{printf("regla field_declaration1\n")};

variant_part: CASE_TOKEN tag_field_type OF_TOKEN variant_list {printf("regla variant_part1\n")}/*para crear casos de tipos de dato*/
			| CASE_TOKEN IDENTIFIER ':' tag_field_type OF_TOKEN variant_list{printf("regla variant_part2\n")};

variant_list: variant_list ';' variant{printf("regla variant_list1\n")}
			| variant{printf("regla variant_list2\n")};

variant: constant_list ':' '(' ')'{printf("regla variant1\n")}
		| constant_list ':' '(' field_list ')'{printf("regla variant2\n")};


constant_list: constant_list ',' constant{printf("regla constant_list1\n")}
			| constant{printf("regla constant_list2\n")};

tag_field_type: IDENTIFIER{printf("regla tag_field_type1\n")}; /*ordinal type*/


set_type: SET_TOKEN OF_TOKEN ordinal_type{printf("regla set_type\n")}; /*que no sea mayor a 4088 o 0..4087*/

file_type: FILE_TOKEN{printf("regla file_type1\n")}
		| OF_TOKEN type{printf("regla file_type2\n")}; 

/**************************************POINTER TYPE *************************/

pointer_type: '^' base_type{printf("regla pointer_type1\n")}
/*un identificaodr base_type: type_identifier*/
			| pointer_type_identifier{printf("regla pointer_type2\n")}; /*un identificador del tipo puntero*/
			
pointer_type_identifier: NIL_TOKEN{printf("regla pointer_type_identifier1\n")};

base_type: INTEGER_TOKEN{printf("regla base_type1\n")}
		|  LONGINT_TOKEN{printf("regla base_type2\n")} 
		|  CHAR_TOKEN{printf("regla base_type3\n")}
		|  BOOLEAN_TOKEN{printf("regla base_type4\n")} 
		|  STRING_TOKEN{printf("regla base_type5\n")} 
		|  RECORD_TOKEN{printf("regla base_type6\n")} 
		|  FILE_TOKEN{printf("regla base_type7\n")} 
		|  ARRAY_TOKEN{printf("regla base_type9\n")} 
		|  IDENTIFIER{printf("regla base_type10\n")} 
		|  FUNCTION_TOKEN{printf("regla base_type11\n")}
		|  unsigned_number{printf("regla base_type12\n")}
		/*se puso para que el tipo tambien sea de tipo numero*/; 

/*identifier del tipo type, osea la base char int etc*/

/*CHAPTER 4 VARIABLES*/

variable_reference: variable_identifier qualifier_list{printf("regla variable_reference1\n")}
				/*| variable_identifier*/;
variable_identifier: IDENTIFIER{printf("regla variable_identifier1\n")};  /*identifier sin mas*/
					
qualifier_list: qualifier_list qualifier{printf("regla qualifier_list1\n")}
				| qualifier{printf("regla qualifier_list2\n")};

qualifier: index{printf("regla qualifier1\n")}
		| field_designator{printf("regla qualifier2\n")}
		|'^'{printf("regla qualifier3\n")};
		/*| file_buffer_symbol
		| pointer_object_symbol*/

index: '[' expression_list ']'{printf("regla index1\n")};

expression_list: expression_list ',' expression{printf("regla expression_list1\n")}
				| expression{printf("regla expression_list2\n")};

field_designator: '.' IDENTIFIER{printf("regla field_designator1\n")}
				| '.' function_call{printf("regla field_designator2\n")};
				/*puede crear problemas checar*/
file_buffer_symbol: '^'{printf("regla file_buffer_symbol\n")};
pointer_object_symbol: '^'{printf("regla pointer_object_symbol\n")};
 /*esto me va a ocasionar un problema reduce reduce*/

/* EXPRESSIONS CHAPTER 5*/

unsigned_constant: unsigned_number{printf("regla unsigned_constant1\n")}
				| QUOTED_STRING{printf("regla unsigned_constant2\n")}
				| QUOTED_CHAR {printf("regla unsigned_constant3\n")}
				/*| constant_identifier*/
				| NIL_TOKEN{printf("regla unsigned_constant4\n")};

unsigned_number: DECIMAL_INT	{printf("regla unsigned_number1\n")}
				| HEXADECIMAL{printf("regla unsigned_number2\n")}
				| REAL_DECIMAL{printf("regla unsigned_number3\n")};
signed_number: sign unsigned_number {printf("regla signed_number1\n")}
			 |  unsigned_number {printf("regla signed_number2\n")};
/*en todos verificar que sea positivo porque sino no es unsigned*/
			

factor: variable_reference{printf("regla factor1\n")}
		| '@' variable_reference{printf("regla factor2\n")}
		| unsigned_constant{printf("regla factor3\n")}
		| function_call{printf	("regla factor4\n")}
		| set_constructor{printf("regla factor5\n")}
		| '(' expression ')'{printf("regla factor6\n")}
		| NOT_TOKEN factor{printf("regla factor7\n")}
		| IDENTIFIER{printf("regla factor8\n")} 
		| type_boolean{printf("regla factor9\n")}; 

term: term term_operator_list  factor{printf("regla term1\n")}
	| factor{printf("regla term2\n")};
term_operator_list: '*'{printf("regla term_operator_list1\n")}
				| '/'{printf("regla term_operator_list2\n")}
				| DIV_TOKEN{printf("regla term_operator_list3\n")}
				| MOD_TOKEN{printf("regla term_operator_list4\n")}
				| AND_TOKEN{printf("regla term_operator_list5\n")};


simple_expression: sign simple_expression_term_operator_iterable {printf("regla simple_expression1\n")}
				| simple_expression_term_operator_iterable{printf("regla simple_expression2\n")} ;

simple_expression_term_operator_iterable: simple_expression_term_operator_iterable simple_expression_term_operator_list term{printf("regla simple_expression_term_operator_iterable1\n")}
										
										| term{printf("regla simple_expression_term_operator_iterable2\n")};
										
simple_expression_term_operator_list: '+' {printf("regla simple_expression_term_operator_list1\n")}
| '-' {printf("regla simple_expression_term_operator_list2\n")}
| OR_TOKEN{printf("regla simple_expression_term_operator_list3\n")};


expression: simple_expression{printf("regla expression1\n")}
			| simple_expression relational_operator simple_expression{printf("regla expression2\n")};

relational_operator: '='{printf("regla relational_operator1\n")}
				| '<'{printf("regla relational_operator2\n")}
				| '>'{printf("regla relational_operator3\n")}
				| LE{printf("regla relational_operator4\n")}
				| RE{printf("regla relational_operator5\n")}
				| NOTEQUAL{printf("regla relational_operator6\n")}
				| IN_TOKEN{printf("regla relational_operator7\n")};


function_call: /*function_identifier
			|*/ function_identifier actual_parameter_list{printf("regla function_call1\n")}
			| function_identifier actual_parameter_list ':' base_type{printf("regla function_call2\n")
			/*Se puso para que a la hora de hacer un function call pueda haber un tipo*/};

function_identifier: FUNCTION_TOKEN{printf("regla function_identifier1\n")} /*agregado por los ejemplos de pascal*/
					| IDENTIFIER;
 /*nada mas es su nombre de la funcion dbe existir*/

actual_parameter_list: '(' actual_parameter_iterable ')'{printf("regla actual_parameter_list1\n")}
						| '(' ')'{printf("regla actual_parameter_list2\n")}
						| '(' actual_parameter_iterable ':' base_type ')'{printf("regla actual_parameter_list3\n")};
						/*que sea posible meter tipos en llamadas a funcion ig, intento 1*/


actual_parameter_iterable: actual_parameter_iterable ',' actual_parameter{printf("regla actual_parameter1\n")}
						| actual_parameter{printf("regla actual_parameter2\n")};

actual_parameter: expression{printf("regla actual_parameter1\n")}
				| procedure_identifier{printf("regla actual_parameter3\n")}/*
				| function_identifier*/;
procedure_identifier: WRITE_TOKEN {printf("regla procedure_identifier1\n")}
					| WRITELN_TOKEN {printf("regla procedure_identifier2\n")}
					| READ_TOKEN {printf("regla procedure_identifier3\n")}
					| READLN_TOKEN {printf("regla procedure_identifier4\n")}
					;//| IDENTIFIER {printf("regla procedure_identifier5\n")};/*solo el nombre*/

set_constructor: '[' ']'{printf("regla set_constructor1\n")}
				| '[' member_group_list ']'{printf("regla set_constructor2\n")};


member_group_list: member_group_list ',' member_group{printf("regla member_group_list1\n")}
				| member_group{printf("regla member_group_list2\n")};





member_group: expression{printf("regla member_group1\n")}
			| expression SUBRANGE expression{printf("regla member_group2\n")};

/*STATEMENTS CHAPTER 6*/

statement: /*al parecer es vacio pero no estoy seguro*/ 
		| label ':' {printf("regla statement1\n")}
		| label ':' simple_statement{printf("regla statement2\n")}
		| label ':' structured_statement{printf("regla statement3\n")}
		| simple_statement{printf("regla statement4\n")}
		| structured_statement{printf("regla statement5\n")}
		| IDENTIFIER{printf("regla statement6\n")} /*añadido no de la original*/
		| variable_reference{printf("regla statement7\n")}; /*añadido no de la original es para que haya llamadas a funcion en statement*/

/******************************* SIMPLE STATEMENT ****************************************************/
simple_statement: assignment_statement{printf("regla simple_statement1\n")}
				| procedure_statement{printf("regla simple_statement2\n")}
				| goto_statement{printf("regla simple_statement3\n")};
/**************************** ASSIGNMENT STATEMENT **************************************************/
assignment_statement: variable_reference ASSIGN expression{printf("regla assignment_statement1\n")}
					| function_identifier ASSIGN expression{printf("regla assignment_statement2\n")};

/**************************** PROCEDURE STATEMENT **************************************************/
procedure_statement: procedure_identifier{printf("regla procedure_statement1\n")}
					| procedure_identifier actual_parameter_list{printf("regla procedure_statement2\n")}
					| IDENTIFIER actual_parameter_list{printf("regla procedure_statement3\n")}; /*no de la original*/

/**************************** GOTO STATEMENT **************************************************/
goto_statement: GOTO_TOKEN label{printf("regla goto_statement1\n")};

/**************************** STRUCTURED STATEMENT ********************************************/
structured_statement: compound_statement{printf("regla structured_statement1\n")}
					| conditional_statement{printf("regla structured_statement2\n")}
					| repetitive_statement{printf("regla structured_statement3\n")}
					| with_statement{printf("regla structured_statement4\n")}

/*compound statement*/

compound_statement: BEGIN_TOKEN statement_list END_TOKEN {printf("regla compound_statement\n")};
statement_list: statement_list ';' statement{printf("regla statement_list1\n")}
			| statement{printf("regla statement_list2\n")};

/*conditional_statement*/
conditional_statement: if_statement
					| case_statement;

/*************************** IF STATEMENT ****************************************************/

if_statement: IF_TOKEN expression THEN_TOKEN statement{printf("regla if_statement1\n")}
			| IF_TOKEN expression THEN_TOKEN statement ELSE_TOKEN statement{printf("regla if_statement2\n")};

case_statement: CASE_TOKEN expression OF_TOKEN case_list END_TOKEN{printf("regla case_statement1\n")}
				| CASE_TOKEN expression OF_TOKEN case_list otherwise_clause END_TOKEN{printf("regla case_statement2\n")}
				| CASE_TOKEN expression OF_TOKEN case_list otherwise_clause ';' END_TOKEN{printf("regla case_statement3\n")};
				| CASE_TOKEN expression OF_TOKEN case_list ';' END_TOKEN{printf("regla case_statement4\n")};
case_list: case_list ';' case{printf("regla case_list1\n")}
		| case{printf("regla case_list2\n")};
case: constant_list ':' statement{printf("regla case1\n")};
otherwise_clause: ';' OTHERWISE_TOKEN statement{printf("regla otherwise_clause1\n")};

repetitive_statement: repeat_statement{printf("regla repetitive_statement1\n")}
					| while_statement{printf("regla repetitive_statement2\n")}
					| for_statement{printf("regla repetitive_statement3\n")};

/************************ REPEAT_STATEMENT **********************************************/
repeat_statement: REPEAT_TOKEN statement_list UNTIL_TOKEN expression{printf("regla repeat_statement\n")};

/************************ WHILE_STATEMENT **********************************************/
while_statement: WHILE_TOKEN expression DO_TOKEN statement{printf("regla while_statement\n")};
/************************ FPR_STATEMENT **********************************************/
for_statement: FOR_TOKEN control_variable ASSIGN initial_value TO_TOKEN final_value DO_TOKEN statement{printf("regla for_statement1\n")}
			| FOR_TOKEN control_variable ASSIGN initial_value DOWNTO_TOKEN final_value DO_TOKEN statement{printf("regla for_statement2\n")};
control_variable: IDENTIFIER{printf("regla control_variable\n")}; /*variable identifier*/
initial_value: expression{printf("regla initial_value\n")};
final_value: expression{printf("regla final_value\n")};

/************************ WITH_STATEMENT **********************************************/
with_statement: WITH_TOKEN record_variable_reference_list DO_TOKEN statement{printf("regla with_statement\n")};

record_variable_reference_list: record_variable_reference_list ',' variable_reference{printf("regla record_variable_reference_list1\n")}/*of type record*/
								| variable_reference{printf("regla record_variable_reference_list2\n")};


/*PROCEDURES AND FUNCTIONS CHAPTER 7*/

/******************************* PROCEDURE DECLARATION **************************************************/
procedure_declaration: procedure_heading ';' procedure_body ';'{printf("regla procedure_declaration1\n")};

procedure_body: block{printf("regla procedure_body1\n")}
				| FORWARD_TOKEN{printf("regla procedure_body2\n")}
				| EXTERNAL_TOKEN{printf("regla procedure_body3\n")};
				
procedure_heading: PROCEDURE_TOKEN IDENTIFIER{printf("regla procedure_heading1\n")}
				| PROCEDURE_TOKEN IDENTIFIER formal_parameter_list{printf("regla procedure_heading2\n")};

/******************************* FUNCTION DECLARATION **************************************************/
function_declaration: function_heading ';' function_body ';'{printf("regla function_declaration1\n")};
function_body: block{printf("regla function_body1\n")}
			|	FORWARD_TOKEN{printf("regla function_body2\n")}
			| EXTERNAL_TOKEN{printf("regla function_body3\n")};

function_heading: FUNCTION_TOKEN IDENTIFIER ':' base_type{printf("regla function_heading1\n")}/*result_type*/
				| FUNCTION_TOKEN IDENTIFIER formal_parameter_list ':' base_type/*result_type*/{printf("regla function_heading2\n")};

result_type: ordinal_type_identifier{printf("regla result_type1\n")}
			| real_type_identifier{printf	("regla result_type2\n")}
			| pointer_type_identifier{printf("regla result_type3\n")};

formal_parameter_list : '(' formal_parameter_list_iterable ')'{printf("regla formal_parameter_list1\n")}
						| '(' ')'{printf("regla formal_parameter_list2\n")};

formal_parameter_list_iterable: formal_parameter_list_iterable ';' formal_parameter_list_iterable_list{printf("regla formal_parameter_list_iterable1\n")}
							| formal_parameter_list_iterable_list{printf("regla formal_parameter_list_iterable2\n")};

formal_parameter_list_iterable_list: parameter_declaration{printf("regla formal_parameter_list_iterable_list1\n")}
									| procedure_heading{printf("regla formal_parameter_list_iterable_list2\n")}	
									| function_heading{printf("regla formal_parameter_list_iterable_list3\n")};

parameter_declaration: VAR_TOKEN identifier_list ':' type_identifier{printf("regla parameter_declaration1\n")}
					| identifier_list ':' type_identifier{printf("regla parameter_declaration2\n")};
					/*var: variable paramenteres, E: value parameters*/
					
type_identifier: type {printf("regla type_identifier1\n")}; /*del tipo type 
							type charray = array [ O •• 255] of Char; 
							charray es un identifier del tipo array char */

/*UNIT CHAPTER 9*/

regular_unit: unit_heading ';' interface_part {printf("regla interface_part_regular_unit1\n")} implementation_part END_TOKEN '.'{printf("regla regular_unit1\n")};
unit_heading: UNIT_TOKEN IDENTIFIER{printf("regla unit_heading1\n")};
interface_part: INTERFACE_TOKEN uses_clause_empty constant_declaration_part
 type_declaration_part variable_declaration_part procedure_and_function_declaration_part{printf("regla interface_part1\n")};

uses_clause_empty: uses_clause {printf("regla uses_clause_empty1\n")}
				| /*empty*/{printf("regla uses_clause_empty2\n")};


implementation_part: IMPLEMENTATION_TOKEN constant_declaration_part type_declaration_part
 variable_declaration_part procedure_and_function_declaration_part {printf("regla implementation_part1\n")};










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
