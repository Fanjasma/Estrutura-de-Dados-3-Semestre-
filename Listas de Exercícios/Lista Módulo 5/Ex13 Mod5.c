/*Faça um programa que leia o ano de nascimento de uma pessoa e imprima se ela é
maior ou menor de idade. Declare o ano atual e o limite de maioridade como
constantes simbólicas. */

#include <stdio.h>
void main()
{
	#define LIMITE_MAIORIDADE 18
	#define ANO_ATUAL 2022
	
	int ano_nascimento;
	printf("Defina o ano do nascimento de uma pessoa: ");
	scanf("%d", &ano_nascimento);
	
	if (ANO_ATUAL-ano_nascimento >= LIMITE_MAIORIDADE )
	{
		printf("A pessoa eh maior de idade.");
	}
	else 
	{
		printf("A pessoa eh menor de idade.");
	}
}

