
/*1. Fa�a um programa para calcular a m�dia de um conjunto de 15 valores dados pelo
usu�rio e armazenados em um vetor. Ao final, imprima a m�dia e todos os valores
digitados que ficaram abaixo da m�dia. */



#include <stdio.h>		
#define TAM 15

void main()
{
	float valores[TAM], media=0; 
	int i, //Contador.
	abaixo; //Valores abaixo da media.

	
	for(i=0; i<TAM; i++)
	{
		printf("Digite o %do. valor: ", i+1);
		scanf("%f", &valores[i]);
		media += valores[i];
	}
	
	media /= TAM;
	
	for(i=0; i<TAM; i++)
		if(valores[i] < media)
			abaixo++;
	
	
	
	printf("\nMedia: %.1f\n", media);
	printf("Valores abaixo da media: %d\n\n", abaixo);
		
}
