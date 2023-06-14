/*2. Um armaz�m trabalha com um determinado n�mero de mercadorias diferentes (um
m�ximo de 100 itens). Fa�a um programa que leia e armazene em vetores os pre�os
de cada mercadoria e a quantidade vendida no m�s e, al�m disso, calcule e imprima:

a. O faturamento mensal do armaz�m.
b. A mercadoria mais vendida e a menos vendida.
c. O pre�o da mercadoria menos vendida.
d. Quantas mercadorias t�m seu pre�o mais alto que o pre�o da mercadoria
menos vendida. */

#include <stdio.h>
#define MAX 100

void main()
{
	float preco[MAX], qntd_vendida[MAX],
	faturamento=0;
	
	int qntd_merc,
	mais_vendida,
	menos_vendida,
	mais_alto=0,
	i; 
	
	printf("Determine a quantidade de mercadorias: ");
	scanf("%d", &qntd_merc);
	
	for (i=0; i<qntd_merc; i++)
	{
		do{
			printf("Determine o preco da mercadoria [%d]: ", i+1);
			scanf("%f", &preco[i]);
			
			if(preco[i]<0)
				printf("\tValor invalido! Tente novamente.\n");
		}while(preco[i]<0);
		
		do{
			printf("Determine a quantidade vendida [%d]: ", i+1);
			scanf("%f", &qntd_vendida[i]);
			
			if(qntd_vendida[i]<0)
				printf("\tValor invalido! Tente novamente.\n");
		}while(qntd_vendida[i]<0);
		
	}
		
	//C�lculo Faturamento
	for (i=0; i<qntd_merc; i++)
		faturamento += preco[i]*qntd_vendida[i];
		
	
	mais_vendida = menos_vendida = 0;
		
	//Mais vendida/Menos vendida 
	for (i=0; i<qntd_merc; i++)
	{
		if(qntd_vendida[i] > qntd_vendida[mais_vendida])
			mais_vendida=i; 
			
		if(qntd_vendida[i] < qntd_vendida[menos_vendida])
			menos_vendida=i; 	
	}
	
	for (i=0; i<qntd_merc; i++)
		if (preco[i]>preco[menos_vendida])
			mais_alto++;
		
				
	
	
	printf("Faturamento: R$ %.2f", faturamento);
	printf("\nMercadoria mais vendida: %d\n", mais_vendida+1);
	printf("Mercadoria menos vendida: %d\n", menos_vendida+1);
	printf("Preco da mercadoria menos vendida: R$ %.2f\n", preco[menos_vendida]);
	printf("Mercadorias com preco acima da mercadoria menos vendida: %d", mais_alto);
}
