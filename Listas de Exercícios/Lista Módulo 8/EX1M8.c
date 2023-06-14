

#include <stdio.h>
#define ORDEM_MAXIMA 30

void main()
{
	int linhas, colunas, i, j;
	float matrizA[ORDEM_MAXIMA][ORDEM_MAXIMA],
	matrizB[ORDEM_MAXIMA][ORDEM_MAXIMA];
	
	printf("________________\n");
	printf("Soma de Matrizes\n");
	printf("________________\n");
	
	//Leitura do número de linhas e colunas da matriz
	
	do {
		printf("Qual o numero de linha das matrizes?");
		scanf("%d", &linhas);
		if(linhas<=0 || linhas>ORDEM_MAXIMA)
			printf("Valor invalido. Digite novamente!\n");	
	}while (linhas <=0 || linhas>ORDEM_MAXIMA);
	
	do {
		printf("Qual o numero de colunas das matrizes?");
		scanf("%d", &colunas);
		if(linhas<=0 || linhas>ORDEM_MAXIMA)
			printf("Valor invalido. Digite novamente!\n");	
	}while (linhas <=0 || linhas>ORDEM_MAXIMA);
	
	printf("\nMatriz A: \n");
	for (i=0;i<linhas;i++)
	{
		for(j=0;j<colunas;j++)
		{
			printf("A[%d][%d]=", i+1, j+1);
			scanf("%f", &matrizA[i][j]);
		}
	}
	
	printf("\nMatriz B: \n");
	for (i=0;i<linhas;i++)
	{
		for(j=0;j<colunas;j++)
		{
			printf("B[%d][%d]=", i+1, j+1);
			scanf("%f", &matrizB[i][j]);
		}
	}
	
	printf("\nMatriz Soma: \n");
	for (i=0;i<linhas;i++)
	{
		for(j=0;j<colunas;j++)
		{
			printf("%.1f\t", matrizA[i][j] + matrizB[i][j]);
		}
	}
	
	
	
}
