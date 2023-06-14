#include <stdio.h>

#define MAX 30

void main()
{
	
	int matriz[MAX][MAX],
	linhas, colunas,
	i, j;
	
	
	printf(":::::::::::::::::::::::::::::\n");
	printf(":: GERAR MATRIZ TRANSPOSTA ::\n");
	printf(":::::::::::::::::::::::::::::\n");
	
	do{
		printf("Insira o numero de linhas: ");
		scanf("%d", &linhas);
		if (linhas<=0 || linhas>MAX)
			printf("\t[Valor invalido. Tente novamente.]\n");
	}while (linhas<=0 || linhas>MAX);
	
	do{
		printf("Insira o numero de colunas: ");
		scanf("%d", &colunas);
		if (colunas<=0 || colunas>MAX)
			printf("\t[Valor invalido. Tente novamente.]\n");
	}while (colunas<=0 || colunas>MAX);
	
	for(i=0; i<linhas; i++)
		for(j=0; j<colunas; j++)
		{
			printf("Insira o valor de (%dx%d): ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}			
	
	
	printf("MATRIZ: \n");
	
	for(i=0; i<linhas; i++)
	{
		for(j=0; j<colunas; j++)
		{
			printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}


	printf("TRANSPOSTA DA MATRIZ: \n");

	for(j=0; j<colunas; j++)
	{
		for(i=0; i<linhas; i++)
		{
			printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}
	
}
