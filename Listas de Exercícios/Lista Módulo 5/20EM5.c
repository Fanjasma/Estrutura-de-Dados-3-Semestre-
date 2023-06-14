/*20. Uma equação do segundo grau é descrita genericamente por ax² + bx + c = 0.
Escrever um programa que leia os valores de a, b e c e resolva a equação do segundo
grau correspondente, imprimindo as raízes reais quando existirem ou avisando que
não existem raízes. */

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
