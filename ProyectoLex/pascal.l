%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312)
	
%}

%option noyywrap
%option outfile="escaner.cpp"
%x COMENTARIO_LLAVE COMENTARIO_PARENTESIS


%%
\{					BEGIN(COMENTARIO_LLAVE); 

\(\*				BEGIN(COMENTARIO_PARENTESIS);

<COMENTARIO_LLAVE>{
\{						{
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\}						{
							BEGIN(INITIAL);
						}
.						ECHO;

}
<COMENTARIO_PARENTESIS>{
\(\*						{
							printf("No se puede abrir comentario dentro de un comentario\n");
							yyterminate();
							
						}
\*\)						{
							BEGIN(INITIAL);
						}
.						ECHO;
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
}