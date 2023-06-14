/* PROGRAMA EXEMPLO 1: Em uma turma de 15 alunos, deseja-se calcular a média da turma, a
partir de notas lidas pelo teclado. Fazer um programa que leia as 15 notas e ao final imprima a
média da turma e o número de alunos que estão acima da média calculada.*/

#include <stdio.h>
#define NUM_ALUNOS 15

void main()
{
	float nota[NUM_ALUNOS], media=0; 
	int i, acima=0;
	
	// Leitura das Notas
	for(i=0;i<NUM_ALUNOS;i++)
	{
		do{
			printf("Qual a nota do %do. aluno? ", i+1);
			scanf("%f", &nota[i]);
			if (nota[i]<0 || nota[i]>10)
				printf("Nota invalida! Digite novamente.\n");
		}while(nota[i]<0 || nota[i]>10);
		
		media += nota[i];
	}
	
	media /= NUM_ALUNOS;
	printf("Media da turma: %.1f\n", media);
	
	//Procura dos alunos acima da média da turma
	for(i=0; i<NUM_ALUNOS;i++)
		if(nota[i]>media)
			acima++;
	
	printf("Numero de alunos acima da media na turma: %d\n", acima);
	
}
