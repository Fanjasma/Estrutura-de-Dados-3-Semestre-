/*15. Fa�a um programa que l� um caracter do teclado e imprima se o caracter � uma letra.
Se for, deve imprimir se a letra em quest�o � mai�scula ou min�scula. Dica: use os
c�digos ASCII das letras para resolver este problema.*/

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
