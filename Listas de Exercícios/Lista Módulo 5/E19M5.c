/*19. Construa um programa que receba três valores quaisquer e imprima-os em ordem
crescente. Como seu programa reage a valores de entrada iguais como no exercício
anterior?  */ 

#include <stdio.h>

void main()
{
	int num1, num2, num3, i;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	printf("Insira o terceiro numero: ");
	scanf("%d", &num3);
	
	if (num1>num2)
	{
		i = num2;
		num2 = num1;
		num1 = i;
	}
	if (num2>num3)
	{
		i = num3;
		num3 = num2;
		num2 = i;
	} 
	if (num1>num2)
	{
		i = num2;
		num2 = num1;
		num1 = i;
	}
	
	printf("%d %d %d", num1, num2, num3);
}

