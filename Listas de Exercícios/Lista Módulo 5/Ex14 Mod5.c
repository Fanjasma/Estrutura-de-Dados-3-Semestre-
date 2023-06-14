/* 14. O que acontece no programa anterior se a pessoa nasceu há 18 anos, mas ainda não
fez aniversário? Melhore o programa para que, neste caso, o programa pergunte se a
pessoa já fez aniversário ou não antes de imprimir o resultado. */

#include <stdio.h>
void main()
{
	#define LIMITE_MAIORIDADE 18
	#define ANO_ATUAL 2018
	
	int ano_nascimento, aniversario;
	printf("Defina o ano do nascimento de uma pessoa: ");
	scanf("%d", &ano_nascimento);
	
	if (ANO_ATUAL-ano_nascimento > LIMITE_MAIORIDADE )
	{
		printf("A pessoa eh maior de idade.");
	}
	else if (ANO_ATUAL-ano_nascimento == LIMITE_MAIORIDADE)
	{
		printf("Essa pessoa ja fez aniversario? Se sim, digite \"1\" e se nao, digite \"0\": ");
		scanf("%d", &aniversario);
		
		if (aniversario == 1)
		{
		printf("A pessoa eh maior de idade.");
		}
		else 
		{
		printf("A pessoa eh menor de idade.");
		}
	}
	else 
	{
		printf("A pessoa eh menor de idade.");
	}
}

