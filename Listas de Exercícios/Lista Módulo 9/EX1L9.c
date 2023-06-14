

#include <stdio.h>
#define TAMANHO 80

void main()
{
	char frase[TAMANHO], trocar, por;
	int i;

	do {
		printf("Qual a frase? ");
		gets(frase);
	}while (frase[0] =='\0');
	
	printf("Trocar... ");
	_flushall();
	scanf("%c", &trocar);
	
	printf("Por... ");
	_flushall();
	scanf("%c", &por);
	
	
	//Troca das letras em toda a frase
	
	for (i=0; i<TAMANHO && frase[i] != '\0'; i++)
	{
		if(frase[i] == trocar)
			frase[i] = por;	
	}	

	printf("A nova frase eh: %s\n", frase);
	
}
