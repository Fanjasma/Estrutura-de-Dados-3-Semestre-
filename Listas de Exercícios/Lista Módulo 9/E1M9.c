#include <stdio.h>

#define MAX 80
void main()
{
	char frase[MAX];
	int i, tamanho=0;
	
	do {
		printf("Qual a frase? ");
		gets(frase);
	} while (frase[0] == '\0');
	
	for (i=0; i<MAX && frase[i] != '\0'; i++)
		tamanho++;
	
	printf("Tamanho: %d", tamanho);
	
	//Obs.: Inicializar o contador em 0, pra não pegar lixo.
	
	
}
