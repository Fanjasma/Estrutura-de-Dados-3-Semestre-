#include <stdio.h>

/*Escreva um programa que leia dois n�meros do teclado e avise se o primeiro � maior
que o segundo ou n�o.*/

void main()
{
	double num1, num2; 
	
	printf("Insira o primeiro numero: ");
	scanf("%lf", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%lf", &num2);
	
	if (num1>num2)
		printf("O primeiro numero eh maior que o segundo numero.");
		
	else 
		printf("O primeiro numero nao eh maior que o segundo numero.");

}
