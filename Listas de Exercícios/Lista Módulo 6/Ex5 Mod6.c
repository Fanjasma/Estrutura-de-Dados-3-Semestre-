/* 5. Fazer um programa que calcule e escreva o n�mero de gr�os de milho que podem ser
colocados em um tabuleiro de xadrez, colocando 1 no primeiro quadro e nos quadros
seguintes o dobro do quadro anterior. (obs.: esse n�mero cresce muito r�pido, tenha
o cuidado de testar se ele n�o sofre um overflow). */

#include <stdio.h>

void main()
{
	int n;
	double num_graos=1;
	
	for (n=0;n<10;n++)
	{
		printf("%.0lf\n", num_graos);
		num_graos *= 2;
	}
	

	
	
}

