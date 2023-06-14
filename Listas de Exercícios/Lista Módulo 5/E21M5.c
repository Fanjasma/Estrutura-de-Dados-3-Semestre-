/*21. 
Escreva um programa que leia os tr�s lados de um tri�ngulo e imprima se o tri�ngulo
� equil�tero, is�sceles ou escaleno, ou ainda, se estes lados n�o podem constituir um
tri�ngulo.
Lembre-se que:
� O comprimento de cada lado de um tri�ngulo � sempre menor do que a soma
dos comprimentos dos outros dois lados.
� Tri�ngulo equil�tero: tr�s lados iguais.
� Tri�ngulo is�sceles: dois lados iguais.
� Tri�ngulo escaleno: tr�s lados diferentes. */

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
