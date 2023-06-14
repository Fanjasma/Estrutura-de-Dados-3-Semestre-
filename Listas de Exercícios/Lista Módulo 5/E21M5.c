/*21. 
Escreva um programa que leia os três lados de um triângulo e imprima se o triângulo
é equilátero, isósceles ou escaleno, ou ainda, se estes lados não podem constituir um
triângulo.
Lembre-se que:
• O comprimento de cada lado de um triângulo é sempre menor do que a soma
dos comprimentos dos outros dois lados.
• Triângulo equilátero: três lados iguais.
• Triângulo isósceles: dois lados iguais.
• Triângulo escaleno: três lados diferentes. */

#include <stdio.h>

void main()
{
	float lado1, lado2, lado3; 
	
	printf("Determine o primeiro lado de um triangulo: ");
	scanf("%f", &lado1);
	
	printf("Determine o segundo lado do mesmo triangulo: ");
	scanf("%f", &lado2);	
	
	printf("Determine o terceiro lado do mesmo triangulo: ");
	scanf("%f", &lado3);
	
	if (lado1 == lado2 && lado2 == lado3)
		printf("O triangulo eh equilatero.");
		
	else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
		printf("O triangulo eh isosceles."); 
		
	else
		printf("O triangulo eh escaleno.");
	
	
	
	
	
}
