
%%
program : program_heading SEMICOLON block DOT;

program_heading : PROGRAM identifier
                | PROGRAM identifier LPAREN identifier_list RPAREN;

identifier_list : identifier_list COMMA identifier
                | identifier;

block : label_declaration_part
        constant_definition_part
        type_definition_part
        variable_declaration_part
        procedure_and_function_declaration_part
        statement_part;

label_declaration_part : LABEL label_list SEMICOLON
                       | /* empty */;

label_list : label_list COMMA label
           | label;

label : ENTERO_DECIMAL
        {
            if ($1 < 0 || $1 > 9999) {
                yyerror("Label debe estar entre 0 y 9999");
            }
            $$ = $1;
        };

constant_definition_part : CONST constant_definition_list
                         | /* empty */;

constant_definition_list : constant_definition_list constant_definition
                         | constant_definition;

constant_definition : identifier EQUAL constant SEMICOLON
                      {
                          if (strlen($1) > 8) {
                              yyerror("Identificador de constante no puede tener más de 8 caracteres");
                          }
                          // Agregar constante a tabla de símbolos
                      };

constant : ENTERO_DECIMAL
           {
               if ($1 < -32768 || $1 > 32767) {
                   yyerror("Constante entera fuera de rango");
               }
               $$ = $1;
           }
         | HEXADECIMAL
         | real_constant
         | TRUE
         | FALSE
         | string_literal;

real_constant : REAL_DECIMAL;

type_definition_part : TYPE type_definition_list
                     | /* empty */;

type_definition_list : type_definition_list type_definition
                     | type_definition;

type_definition : identifier EQUAL type_denoter SEMICOLON
                  {
                      if (strlen($1) > 8) {
                          yyerror("Identificador de tipo no puede tener más de 8 caracteres");
                      }
                      // Agregar tipo a tabla de símbolos
                  };

type_denoter : identifier
             | new_type;

new_type : new_ordinal_type
         | new_structured_type
         | new_pointer_type;

new_ordinal_type : enumerated_type
                 | subrange_type;

enumerated_type : LPAREN identifier_list RPAREN;

subrange_type : constant DOTDOT constant
                {
                    if ($1 > $3) {
                        yyerror("Subrange debe estar en orden ascendente");
                    }
                };

new_structured_type : ARRAY LBRACKET index_type RBRACKET OF component_type
                    | RECORD field_list END;

index_type : ordinal_type;

ordinal_type : new_ordinal_type
             | identifier;

component_type : type_denoter;

field_list : fixed_part
           | fixed_part SEMICOLON variant_part
           | variant_part;

fixed_part : record_section_list;

record_section_list : record_section_list SEMICOLON record_section
                    | record_section;

record_section : identifier_list COLON type_denoter;

variant_part : CASE variant_selector OF variant_list;

variant_selector : tag_field COLON tag_type
                 | tag_type;

tag_field : identifier;

tag_type : identifier;

variant_list : variant_list SEMICOLON variant
             | variant;

variant : case_constant_list COLON LPAREN field_list RPAREN;

case_constant_list : case_constant_list COMMA case_constant
                   | case_constant;

case_constant : constant
                {
                    // Verificar que case constants sean únicos y del mismo tipo que el selector
                };

new_pointer_type : CARET domain_type;

domain_type : identifier;

variable_declaration_part : VAR variable_declaration_list
                          | /* empty */;

variable_declaration_list : variable_declaration_list variable_declaration
                          | variable_declaration;

variable_declaration : identifier_list COLON type_denoter SEMICOLON
                       {
                           // Verificar que las variables no hayan sido declaradas previamente
                           // Agregar variables a tabla de símbolos
                       };

procedure_and_function_declaration_part : proc_or_func_declaration_list
                                        | /* empty */;

proc_or_func_declaration_list : proc_or_func_declaration_list proc_or_func_declaration
                              | proc_or_func_declaration;

proc_or_func_declaration : procedure_declaration
                         | function_declaration;

procedure_declaration : procedure_heading SEMICOLON procedure_body;

procedure_heading : PROCEDURE identifier formal_parameter_list SEMICOLON;

formal_parameter_list : LPAREN formal_parameter_section_list RPAREN
                      | /* empty */;

formal_parameter_section_list : formal_parameter_section_list SEMICOLON formal_parameter_section
                              | formal_parameter_section;

formal_parameter_section : value_parameter_specification
                         | variable_parameter_specification
                         | procedural_parameter_specification
                         | functional_parameter_specification;

value_parameter_specification : identifier_list COLON identifier;

variable_parameter_specification : VAR identifier_list COLON identifier
                                   {
                                       // Verificar que los parámetros por referencia sean de un tipo válido
                                   };

procedural_parameter_specification : procedure_heading;

functional_parameter_specification : function_heading;

procedure_body : block;

function_declaration : function_heading SEMICOLON function_body;

function_heading : FUNCTION identifier formal_parameter_list COLON result_type SEMICOLON;

result_type : identifier
              {
                  // Verificar que el tipo de retorno sea válido
              };

function_body : block;

statement_part : compound_statement;

compound_statement : BEGIN statement_list END;

statement_list : statement_list SEMICOLON statement
               | statement;

statement : simple_statement
          | structured_statement;

simple_statement : assignment_statement
                 | procedure_statement
                 | goto_statement
                 | empty_statement;

assignment_statement : variable_access ASSIGN expression
                       {
                           // Verificar compatibilidad de tipos entre variable y expresión
                       };

variable_access : identifier
                | indexed_variable
                | field_designator;

indexed_variable : variable_access LBRACKET index_expression_list RBRACKET;

index_expression_list : index_expression_list COMMA index_expression
                      | index_expression;

index_expression : expression;

field_designator : variable_access DOT identifier;

procedure_statement : identifier
                    | identifier actual_parameter_list;

actual_parameter_list : LPAREN actual_parameter_list RPAREN
                      | /* empty */;

actual_parameter_list : actual_parameter_list COMMA actual_parameter
                      | actual_parameter;

actual_parameter : expression
                   {
                       // Verificar que el tipo del parámetro coincida con la declaración
                   };

goto_statement : GOTO label;

empty_statement : /* empty */;

structured_statement : compound_statement
                     | conditional_statement
                     | repetitive_statement;

conditional_statement : if_statement;

if_statement : IF expression THEN statement else_part;

else_part : ELSE statement
          | /* empty */;

repetitive_statement : while_statement
                     | for_statement;

while_statement : WHILE expression DO statement;

for_statement : FOR control_variable ASSIGN initial_value direction final_value DO statement;

control_variable : identifier;

initial_value : expression;

direction : TO
          | DOWNTO;

final_value : expression;

expression : simple_expression
           | simple_expression relational_operator simple_expression;

simple_expression : term
                  | simple_expression adding_operator term;

term : factor
     | term multiplying_operator factor;

factor : variable_access
       | constant
       | LPAREN expression RPAREN
       | function_designator
       | NOT factor
       | set_constructor;

function_designator : identifier actual_parameter_list
                      {
                          // Verificar que el número y tipo de parámetros coincidan con la declaración
                          // Verificar que el tipo de retorno coincida con el esperado
                      };

set_constructor : LBRACKET member_designator_list RBRACKET
                | LBRACKET RBRACKET;

member_designator_list : member_designator_list COMMA member_designator
                       | member_designator;

member_designator : expression
                  | expression DOTDOT expression;

relational_operator : EQUAL
                    | NOTEQUAL
                    | LT
                    | LE
                    | GT
                    | GE;

adding_operator : PLUS
                | MINUS
                | OR;

multiplying_operator : STAR
                     | SLASH
                     | DIV
                     | MOD
                     | AND;

identifier : IDENTIFIER
             {
                 if (strlen($1) > 8) {
                     yyerror("Identificador no puede tener más de 8 caracteres");
                 }
                 $$ = $1;
             };

string_literal : STRING_LITERAL
                 {
                     if (strlen($1) > 255) {
                         yyerror("Literal de string no puede tener más de 255 caracteres");
                     }
                     $$ = $1;
                 };
%%