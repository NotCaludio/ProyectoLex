%{
	#include <stdio.h>
	#pragma warning(disable:4267 4244 4273)
	
%}

%option noyywrap
%option outfile="escaner.cpp"
%x COMENTARIO_LLAVE COMENTARIO_PARENTESIS


%%
\{					{BEGIN(COMENTARIO_LLAVE); printf("Se encontro comentario");}

\(\*				BEGIN(COMENTARIO_PARENTESIS);

<COMENTARIO_LLAVE>{
\{						{
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\}						{
							BEGIN(INITIAL);
						}
.

}
<COMENTARIO_PARENTESIS>{
\(\*						{
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\*\)						{
							BEGIN(INITIAL);
						}
.
}


						
						

%%


int main(int argc, char * argv[])
{
	if (argc > 1)
	{
		++argv; //apunta al siguiente elemento del arreglo
		yyin = fopen(argv[0], "rt");
		if (!yyin)
		{
			printf("Archivo %s no puede ser abierto. Entrada tradicional.\n", argv[0]);
			yyin = stdin;
		}
		
			
		
	}
	
	yylex();
	
}