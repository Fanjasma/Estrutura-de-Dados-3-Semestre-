/*18. Elabore um programa que receba três valores quaisquer e imprima o menor valor dos
três lidos. O que acontece se o seu programa tiver lido dois ou mais números iguais
(Ex.: 1, 1, 3)? */ 

#include <stdio.h>

void main()
{
	
//	V2
	
	int num1, num2, num3;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	printf("Insira o terceiro numero: ");
	scanf("%d", &num3);
	
	if (num3<=num2)
		num2 = num3;
	
	if (num3<=num2)
		num3 = num2;
	
	if (num2<=num1)
		num1 = num2;
		
	
	printf("O menor numero eh: %d", num1);
	
	
	
	
/*	V1

	if (num3<=num2)
	{
		menor = num3;
	}
	if (num2<=num3)
	{
		menor = num2;
	}
	if (num1<=menor)
	{
		menor = num1;
	}

	printf("Menor: %d", menor);
	
}
