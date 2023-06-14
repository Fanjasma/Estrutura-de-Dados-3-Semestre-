/*Em um Estado, os comerciantes com faturamento anual de até R$100.000,00 pagam
10% de ICMS sobre o faturamento e aqueles com faturamento superior pagam 15%.
Faça um programa que leia o faturamento de um comerciante e imprima o valor do
ICMS devido. Declare como constantes simbólicas o limite e os percentuais de
imposto.*/

#include <stdio.h>
#define PERCENTUAL_ICMS_1 10
#define PERCENTUAL_ICMS_2 15
#define FATURAMENTO_MAX 100.000f

void main()
{
	float faturamento, ICMS;

	printf("+++++++++++++++++\n");
	printf("+");
	printf("CALCULO DE ICMS+\n");
	printf("+++++++++++++++++\n\n\n");

	printf("Insira o faturamento anual da sua empresa: ");
	scanf("%f", &faturamento);

	if (faturamento>FATURAMENTO_MAX)
	{
	ICMS = faturamento*PERCENTUAL_ICMS_2/100;
	printf("Valor do ICMS devido: %.3f", ICMS);
	}

	else 
	{	

	ICMS = faturamento*PERCENTUAL_ICMS_1/100;
	printf("Valor do ICMS devido: %.3f", ICMS);
	}

}	
	
