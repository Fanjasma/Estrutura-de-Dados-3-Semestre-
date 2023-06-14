#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia um número real do teclado e imprima se o número lido
é positivo ou não.*/


void main ()
{
	
double  x;

printf("Insira um numero real do teclado para saber se ele eh positivo ou nao:");
scanf("%lf", &x);
 
if (x>0)
	printf("O numero inserido eh positivo.");
	
else 
	printf("O numero inserido nao eh positivo.");

}
