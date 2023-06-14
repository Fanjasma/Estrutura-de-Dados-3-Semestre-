/*15. Faça um programa que lê um caracter do teclado e imprima se o caracter é uma letra.
Se for, deve imprimir se a letra em questão é maiúscula ou minúscula. Dica: use os
códigos ASCII das letras para resolver este problema.*/

#include <stdio.h>
void main()
{
	char caractere;
	printf("Digite uma letra para saber se ela eh maiuscula ou minuscula: ");
	scanf("%c", &caractere);
	
	if (caractere>96 && caractere<123)
	{
		printf("Eh uma letra minuscula.");
	}
	else if (caractere>64 && caractere<91)
	{
		printf("Eh uma letra maiuscula.");
	}
	else 
	{
		printf("O caractere nao eh uma letra.");
	}
	
	printf("\n\n");
	printf("%c", caractere);
}
