%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312)
#define CANTIDAD_OPERADORES 22  

struct operadores{
	char operador[3]= {' ', ' ', '\0'};
	unsigned int cantidad = 0;
};	
operadores arreglo_operadores[CANTIDAD_OPERADORES];

/*estructura operadores contiene el operador en char[] y toma dos espacios,
esto porque hay operadores de mas de 1 caracter
Entonces hay un arreglo de estructuras, que contiene a todos los operadores y las veces que salen
*/


%}

%option noyywrap
%option outfile="escaner.cpp"
%x COMENTARIO_LLAVE COMENTARIO_PARENTESIS


%%

"@"|"#"|"<>"|"<="|">="|"+"|"-"|"*"	|
"/"|"<"|">"|"^"|";"|"="|","|"("     |
")"|"["|"]"|":"|":="|".."	{
							/* primero checa si existe el operador en alguna estructura del arreglo, si si le suma a la cantidad
							de lo contrario sobreescribe uno vacio para poner el operador*/
								unsigned int operador_existe_en_arreglo= 0;
								for (int i = 0; i< CANTIDAD_OPERADORES; i++)
								{
									if(strcmp(arreglo_operadores[i].operador,yytext) == 0) //si es 0 es que son iguales
										{
											arreglo_operadores[i].cantidad++;
											operador_existe_en_arreglo=1;
											break;
										}

								}
								if(!operador_existe_en_arreglo)
								for (int i = 0; i< CANTIDAD_OPERADORES; i++)
								{
										if (strcmp(arreglo_operadores[i].operador,"  ") == 0 )
										{
											strncpy(arreglo_operadores[i].operador, yytext, 2);
											arreglo_operadores[i].cantidad++;
											operador_existe_en_arreglo=0;
											break;
											
										}

								}
							}





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
		
	FILE * palabras_reservadas = fopen("palabras_reservadas.csv", "wt");
	if (!palabras_reservadas)
		printf("No se pudo abrir el archivo de palabras_reservadas");
	else
	{
		for(int i = 0; i < 5; i++)
			fprintf(palabras_reservadas, "1,2,3,4\n");
	}
	
	for(int i = 0; i < CANTIDAD_OPERADORES; i++)
		if(strcmp(arreglo_operadores[i].operador,"  ") == 0)
			continue;
		else
			printf("Caracter %s: %d\n",arreglo_operadores[i].operador,arreglo_operadores[i].cantidad);
			
	FILE * caracteres_especiales = fopen("caracteres_especiales.csv", "wt");
	if (!caracteres_especiales)
		printf("No se pudo abrir el archivo de caracteres_especiales");
	else
	{
		for(int i = 0; i < CANTIDAD_OPERADORES; i++)
		if(strcmp(arreglo_operadores[i].operador,"  ") == 0)
			continue;
		else
			if(strcmp(arreglo_operadores[i].operador,",") ==0)
				fprintf(caracteres_especiales,"%d,%s,%d\n",i,"comma",arreglo_operadores[i].cantidad);
			else
				fprintf(caracteres_especiales,"%d,%s,%d\n",i,arreglo_operadores[i].operador,arreglo_operadores[i].cantidad);
	}
}