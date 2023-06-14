/* 11. Numa universidade, o sistema de avaliação é o seguinte: para passar direto, o aluno
precisa ter média do período (mp) igual ou superior a 7 pontos. Caso contrário, o
aluno será submetido a exame final, sendo a sua média final (mf) calculada pela
seguinte fórmula: mf = 0.6mp + 0.4ne, onde ne é a nota do exame. Essa média final
deverá então ser igual ou superior a 5 pontos para que o aluno seja aprovado. Por
outro lado, a média do período é calculada através da média das notas dos créditos,
cujo número é diferente para cada disciplina. Faça um programa que leia do usuário o
número de créditos da disciplina, as notas dos créditos, e se necessário calcule a
nota que o aluno precisa tirar no exame final para ser aprovado. Se antes de terminar
todos os créditos o aluno já estiver aprovado, avise isso a ele e encerre a leitura de
notas (utilize aqui um comando break). */

#include <stdio.h>

void main()
{
	float soma_creditos, media_periodo=0, nota_necessaria, notas_creditos;
	int num_creditos, i=0;
	
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	printf("+ SISTEMA DE AVALIACAO DA UNIVERSIDADE +\n");
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\nInsira a quantidade de creditos de disciplina: ");
	scanf("%d", &num_creditos);
	printf("\n");
	printf("## INSERIDOS NOTAS\n");
	
	for (i=0; i<num_creditos; i++)
	{
		do{
		
			printf("\nInsira a nota dos creditos da %da disciplina: ", i+1);
			scanf("%f", &notas_creditos);
			
			if (notas_creditos>10 || notas_creditos<0)
				printf("Digite um valor valido.\n");
				
		} while (notas_creditos>10 || notas_creditos<0);
		
		
		soma_creditos += notas_creditos;
		media_periodo = soma_creditos/num_creditos;
	
		if (media_periodo > 7)
		{
			printf("O aluno foi aprovado.");
			break;
		}
		
	}
	
	if (media_periodo < 7)
	{
		printf("O aluno nao foi aprovado e devera fazer prova final.");
		
		nota_necessaria = (5 - 0.6*media_periodo)/0.4;
		
		printf("\nNota necessaria para passar na prova final: %.2f", nota_necessaria);
		
	}	
	
	
	
	
}
