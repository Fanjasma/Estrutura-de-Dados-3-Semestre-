/*. Desejando obter a média aritmética das idades dos alunos do curso de Odontologia,
do primeiro ano, do ano de 1998, construir um programa que leia, calcule e mostre a
média aritmética das idades. O programa é encerrado quando for lida uma idade igual
a zero e deve rejeitar idades negativas, pedindo que o usuário redigite. */

#include <stdio.h>
#include <math.h>
#define ANOATUAL 1998

void main()
{
	int anonascimento=1, soma=0, contador=0, idade;
	
	while (anonascimento != 0)
	{	
		printf("Digite o ano de nascimento de um aluno: ");
		scanf("%d", &anonascimento);
	
		if (anonascimento<0)
		{
			printf("Valor invalido. Tente novamente.\n");
			continue;
		}
		
		idade = ANOATUAL - anonascimento;
		soma = soma + anonascimento;
		
		if (anonascimento != 0)
			contador = contador + 1;
		
	}
	
	printf("A media de idade dos alunos eh de %d", soma/contador);

}
