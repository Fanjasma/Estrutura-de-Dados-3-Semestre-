#include <stdio.h>

int main()
{
	int anoAtual, anoNascimento, idade;
	
	printf("Insira o ano atual");
	scanf ("%d", &anoAtual);
	
	printf("Insira o ano em que voce nasceu");
	scanf ("%d", &anoNascimento);

	idade = anoAtual - anoNascimento;
	printf("Sua idade e %d ", idade);
	
	idade = idade - 1;

	printf("ou %d se ja fez aniversario", idade);
	
}
