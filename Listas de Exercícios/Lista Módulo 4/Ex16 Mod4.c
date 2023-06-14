// Faça um programa que leia do teclado o valor de um raio e calcule o volume da esfera correspondente.

#include <stdio.h>
#include <math.h>

void main()
{
#define pi 3.14
double raio, volume;

printf("Insira o valor do raio de uma esfera:");
scanf("%lf", &raio);

volume = (4*pi*pow(raio,3))/3;
	
printf("O volume de uma esfera com raio %lf eh de %lf", raio, volume);
}

