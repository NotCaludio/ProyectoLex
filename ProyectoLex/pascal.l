%{
#include <stdio.h>
#include "parser.hpp"
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4273 28251)

unsigned int columna =1;
unsigned int fila =1; 


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
ENTERO_DECIMAL (0|{NUMERO_ENTERO_SIN_SIGNO})
HEXADECIMAL \$(0|[1-9A-F][0-9A-F]*)
FACTOR		([eE](\+|-)?{NUMERO_ENTERO_SIN_SIGNO})
REAL_DECIMAL (0|{NUMERO_ENTERO_SIN_SIGNO})({FACTOR}|\.[0-9]+{FACTOR}?)

%%

{ENTERO_DECIMAL}	{
						columna += yyleng;
						yylval.intVal = atoi(yytext);
						return DECIMAL_INT;
					}

{HEXADECIMAL}		{
						columna += yyleng;
						return HEXADECIMAL;
					}
					
{REAL_DECIMAL}		{
						columna += yyleng;
						yylval.floatVal = atof(yytext);
						return REAL_DECIMAL;
					}

[ \t]+				{
						columna += yyleng;
						
					}
[\n]+				{
						fila+=yyleng;
						columna=1;
					}

"@"|"#"|"+"|"-"|"*"|"."					|
"/"|"<"|">"|"^"|";"|"="|","|"("     |
")"|"["|"]"|":"|"$"					{
										columna+=yyleng;
										return *yytext;
									}
":="|".."|"<>"|"<="|">="			{
										columna+=yyleng;
										return regresar_numero_token_operador();
									}
(\'[^\\\'\n]?\')				|
(\'([^\\\'\n]|\\.|\'\')\') 	{
								columna+=yyleng;
								return QUOTED_CHAR;
							}
(\'([^\\\'\n]|\\.|\'\')*\') 	{
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
							columna+=yyleng;
							return regresar_numero_token_palabra();
						}

[a-z][0-9a-z_]*		{
						columna+=yyleng;
						return IDENTIFIER;
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
							yyterminate();
							
						}
\}						{
							puts("");
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{
						fila+= yyleng;
						columna=1;
					}
[^\{|\}\n]*				{
							columna+=yyleng;
						}

}
<COMENTARIO_PARENTESIS>{
\(\*					{
							yyterminate();
							
						}
\*\)					{
							puts("");
							BEGIN(INITIAL);
							columna++;
						}
[\n]+				{

						fila+=yyleng;
						columna=1;
					}
[^\(\*|\*\)\n]*			{

							columna+=yyleng;
						}

}


						
						

%%


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
	
   return 1;
}

