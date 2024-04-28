%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union {
    int intVal;
    float floatVal;
    char* strVal;
}

%token PROGRAM_TOKEN BEGIN_TOKEN USES_TOKEN UNIT_TOKEN INTERFACE_TOKEN
%token IMPLEMENTATION_TOKEN LABEL_TOKEN CONST_TOKEN TYPE_TOKEN REAL_TOKEN
%token INTEGER_TOKEN LONGINT_TOKEN WORD_TOKEN CHAR_TOKEN BOOLEAN_TOKEN
%token TRUE_TOKEN FALSE_TOKEN STRING_TOKEN PACKED_TOKEN ARRAY_TOKEN
%token RECORD_TOKEN END_TOKEN CASE_TOKEN OTHERWISE_TOKEN OF_TOKEN
%token SET_TOKEN VAR_TOKEN FORWARD_TOKEN EXTERNAL_TOKEN FUNCTION_TOKEN
%token PROCEDURE_TOKEN FILE_TOKEN GOTO_TOKEN IF_TOKEN THEN_TOKEN
%token ELSE_TOKEN REPEAT_TOKEN UNTIL_TOKEN WHILE_TOKEN DO_TOKEN
%token FOR_TOKEN TO_TOKEN DOWNTO_TOKEN WITH_TOKEN NIL_TOKEN
%token READ_TOKEN READLN_TOKEN WRITE_TOKEN WRITELN_TOKEN IN_TOKEN
%token OR_TOKEN DIV_TOKEN MOD_TOKEN AND_TOKEN NOT_TOKEN

%token ASSIGN SUBRANGE COMP LEFT RIGHT
%token <intVal> DECIMAL_INT
%token HEXADECIMAL
%token <floatVal> REAL_DECIMAL
%token QUOTED_CHAR QUOTED_STRING
%token <strVal> IDENTIFIER

%start program

%%

program : PROGRAM_TOKEN IDENTIFIER ';' uses_clause block '.' ;

uses_clause : USES_TOKEN IDENTIFIER_list ';' | /* empty */ ;

IDENTIFIER_list : IDENTIFIER | IDENTIFIER_list ',' IDENTIFIER ;

block : label_part constant_part type_part variable_part procedure_and_function_part statement_part ;

label_part : LABEL_TOKEN DECIMAL_INT_list ';' | /* empty */ ;

DECIMAL_INT_list : DECIMAL_INT | DECIMAL_INT_list ',' DECIMAL_INT ;

constant_part : CONST_TOKEN constant_definition_list | /* empty */ ;

constant_definition_list : constant_definition | constant_definition_list constant_definition ;

constant_definition : IDENTIFIER '=' constant ';' ;

constant : sign DECIMAL_INT | sign HEXADECIMAL | sign REAL_DECIMAL | QUOTED_CHAR | QUOTED_STRING | TRUE_TOKEN | FALSE_TOKEN | NIL_TOKEN ;

sign : '+' | '-' | /* empty */ ;

type_part : TYPE_TOKEN type_definition_list | /* empty */ ;

type_definition_list : type_definition | type_definition_list type_definition ;

type_definition : IDENTIFIER '=' type ';' ;

type : simple_type | structured_type | pointer_type ;

simple_type : REAL_TOKEN | INTEGER_TOKEN | LONGINT_TOKEN | WORD_TOKEN | CHAR_TOKEN | BOOLEAN_TOKEN | subrange_type | enumerated_type ;

subrange_type : constant SUBRANGE constant ;

enumerated_type : '(' IDENTIFIER_list ')' ;

structured_type : PACKED_TOKEN structured_type | unpacked_structured_type ;

unpacked_structured_type : array_type | record_type | set_type | file_type ;

array_type : ARRAY_TOKEN '[' index_list ']' OF_TOKEN type ;

index_list : index_type | index_list ',' index_type ;

index_type : simple_type ;

record_type : RECORD_TOKEN field_list END_TOKEN ;

field_list : fixed_part | fixed_part ';' variant_part | variant_part ;

fixed_part : record_section | fixed_part ';' record_section ;

record_section : IDENTIFIER_list ':' type ;

variant_part : CASE_TOKEN variant_selector OF_TOKEN variant_list ;

variant_selector : tag_field ':' tag_type | tag_type ;

tag_field : IDENTIFIER ;

tag_type : IDENTIFIER ;

variant_list : variant | variant_list ';' variant ;

variant : case_label_list ':' '(' field_list ')' ;

case_label_list : constant | case_label_list ',' constant ;

set_type : SET_TOKEN OF_TOKEN simple_type ;

file_type : FILE_TOKEN OF_TOKEN type ;

pointer_type : '^' IDENTIFIER ;

variable_part : VAR_TOKEN variable_declaration_list | /* empty */ ;

variable_declaration_list : variable_declaration | variable_declaration_list variable_declaration ;

variable_declaration : IDENTIFIER_list ':' type ';' ;

procedure_and_function_part : procedure_or_function_declaration_list | /* empty */ ;

procedure_or_function_declaration_list : procedure_or_function_declaration | procedure_or_function_declaration_list procedure_or_function_declaration ;

procedure_or_function_declaration : procedure_declaration | function_declaration ;

procedure_declaration : PROCEDURE_TOKEN IDENTIFIER parameters ';' directive ';' procedure_block ;

function_declaration : FUNCTION_TOKEN IDENTIFIER parameters ':' function_type ';' directive ';' function_block ;

directive : FORWARD_TOKEN | EXTERNAL_TOKEN | /* empty */ ;

parameters : '(' formal_parameter_list ')' | /* empty */ ;

formal_parameter_list : formal_parameter_section | formal_parameter_list ';' formal_parameter_section ;

formal_parameter_section : value_parameter_specification | variable_parameter_specification | procedural_parameter_specification | functional_parameter_specification ;

value_parameter_specification : IDENTIFIER_list ':' type ;

variable_parameter_specification : VAR_TOKEN IDENTIFIER_list ':' type ;

procedural_parameter_specification : procedure_heading ;

functional_parameter_specification : function_heading ;

procedure_heading : PROCEDURE_TOKEN IDENTIFIER parameters ;

function_heading : FUNCTION_TOKEN IDENTIFIER parameters ':' function_type ;

function_type : IDENTIFIER ;

procedure_block : block ;

function_block : block ;

statement_part : compound_statement ;

compound_statement : BEGIN_TOKEN statement_sequence END_TOKEN ;

statement_sequence : statement | statement_sequence ';' statement ;

statement : label ':' unlabeled_statement | unlabeled_statement ;

label : DECIMAL_INT ;

unlabeled_statement : simple_statement | structured_statement ;

simple_statement : empty_statement | assignment_statement | procedure_statement | goto_statement ;

empty_statement : /* empty */ ;

assignment_statement : variable ASSIGN expression ;

procedure_statement : IDENTIFIER | IDENTIFIER '(' actual_parameter_list ')' ;

actual_parameter_list : actual_parameter | actual_parameter_list ',' actual_parameter ;

actual_parameter : expression | variable | procedure_identifier | function_identifier ;

goto_statement : GOTO_TOKEN label ;

structured_statement : compound_statement | conditional_statement | repetitive_statement | with_statement ;

conditional_statement : if_statement | case_statement ;

if_statement : IF_TOKEN expression THEN_TOKEN statement else_part ;

else_part : ELSE_TOKEN statement | /* empty */ ;

case_statement : CASE_TOKEN expression OF_TOKEN case_element_list END_TOKEN ;

case_element_list : case_element | case_element_list ';' case_element ;

case_element : case_label_list ':' statement ;

repetitive_statement : repeat_statement | while_statement | for_statement ;

repeat_statement : REPEAT_TOKEN statement_sequence UNTIL_TOKEN expression ;

while_statement : WHILE_TOKEN expression DO_TOKEN statement ;

for_statement : FOR_TOKEN variable ASSIGN expression to_or_downto expression DO_TOKEN statement ;

to_or_downto : TO_TOKEN | DOWNTO_TOKEN ;

with_statement : WITH_TOKEN record_variable_list DO_TOKEN statement ;

record_variable_list : variable | record_variable_list ',' variable ;

expression : simple_expression | simple_expression relational_operator simple_expression ;

simple_expression : term | simple_expression adding_operator term | simple_expression OR_TOKEN term ;

term : factor | term multiplying_operator factor | term AND_TOKEN factor ;

factor : variable | unsigned_constant | function_designator | set_constructor | '(' expression ')' | NOT_TOKEN factor ;

unsigned_constant : unsigned_number | QUOTED_CHAR | QUOTED_STRING | NIL_TOKEN ;

unsigned_number : DECIMAL_INT | HEXADECIMAL | REAL_DECIMAL ;

variable : IDENTIFIER | indexed_variable | field_designator | variable_reference ;

indexed_variable : variable '[' index_expression_list ']' ;

index_expression_list : index_expression | index_expression_list ',' index_expression ;

index_expression : expression ;

field_designator : variable '.' IDENTIFIER ;

variable_reference : variable '^' ;

function_designator : IDENTIFIER | IDENTIFIER '(' actual_parameter_list ')' ;

set_constructor : '[' member_designator_list ']' ;

member_designator_list : member_designator | member_designator_list ',' member_designator ;

member_designator : expression | expression SUBRANGE expression ;

adding_operator : '+' | '-' | OR_TOKEN ;

multiplying_operator : '*' | '/' | DIV_TOKEN | MOD_TOKEN | AND_TOKEN ;

relational_operator : '=' | COMP | '<' | LEFT | '>' | RIGHT | IN_TOKEN ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Parse error: %s\n", s);
    exit(1);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error opening file: %s\n", argv[1]);
            return 1;
        }
    }
    yyparse();
    return 0;
}