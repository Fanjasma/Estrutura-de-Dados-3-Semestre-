#include <stdio.h>
#include <ctype.h>

#define MAX 80

void main()
{
	char frase[MAX];
	int i;
	
	do{
		printf("Qual a frase?");
		gets(frase);
	}while (frase[0] == '\0')
	
	for (i=0, i<TAMANHO && frase[i] != '\0'; i++)
	{
		if (isspace(frase[i]))
			frase[i] = '-';
			
		if (islower(frase[i]))
			frase[i] = toupper;
			
		if (isupper(frase[i]))
			frase[i] = tolower;
	}
}
