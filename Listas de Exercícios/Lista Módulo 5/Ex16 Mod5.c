/* 16. Elabore um programa que dado o peso de um boxeador, informe à categoria a qual
pertence, seguindo a tabela abaixo. */

#include <stdio.h>
void main()
{
	float peso;
	printf("Digite o peso do boxeador: ");
	scanf("%f", &peso);
	
	if (peso<50)
	{
		printf("O boxeador eh da categoria do peso palha");
	}
	else if (peso<59)
	{
		printf("O boxeador eh da categoria do peso pluma");
	}
	else if (peso<75)
	{
		printf("O boxeador eh da categoria do peso leve");
	}
	else if (peso<87)
	{
		printf("O boxeador eh da categoria do peso pesado");
	}
	else 
	{
		printf("O boxeador eh da categoria do peso super pesado");
	}
}

