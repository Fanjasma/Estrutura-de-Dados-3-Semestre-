/*20. Uma equa��o do segundo grau � descrita genericamente por ax� + bx + c = 0.
Escrever um programa que leia os valores de a, b e c e resolva a equa��o do segundo
grau correspondente, imprimindo as ra�zes reais quando existirem ou avisando que
n�o existem ra�zes. */

#include <math.h>
#include <stdio.h>

void main()
{
	float a, b, c, x1, x2, delta;
	
	printf("Insira o valor de \"a\": ");
	scanf("%f", &a);
	
	printf("Insira o valor de \"b\": ");
	scanf("%f", &b);
	
	printf("Insira o valor de \"c\": ");
	scanf("%f", &c);
	
	delta = b*b - 4*a*c;
	
	if (delta<0)
		printf("\nNao existe solucao real para a equacao.");
	
	
	if (delta==0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		printf("\nx = %f", x1);
	}
	
	if (delta>0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		printf("\n x1 = %f", x1);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("\n x2 = %f", x2);
	}
	
	
	
	
}
