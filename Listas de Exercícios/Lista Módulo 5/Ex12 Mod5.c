/* 12. Um microempresário tem por norma retirar mensalmente 40% do lucro de sua
empresa para os seus gastos pessoais se o lucro ultrapassar R$ 3.000,00 e retirar
apenas R$ 1.000,00 se o lucro for menor que isso. Faça um programa que leia do
teclado o faturamento mensal e o total das despesas para calcular o lucro (lucro =
faturamento - despesas) e imprima quanto o microempresário deve retirar neste mês.
Declare com constantes simbólicas o lucro mínimo, a retirada mínima e o limite da
retirada. */

#include <stdio.h>
void main()
{
	#define LUCRO_MINIMO 3000.0f
	#define RETIRADA_MINIMA 1000.0f
	#define LIMITE_RETIRADA 40
	
	float faturamento_mensal, total_despesas, lucro;
	
	printf("Defina o faturamento mensal: "); 
	scanf("%f", &faturamento_mensal);
	
	printf("Defina o total das despesas: ");
	scanf("%f", &total_despesas);
	
	lucro = faturamento_mensal - total_despesas;
	
	if (lucro>LUCRO_MINIMO)
	{
		printf("Retirar R$ %.2f (40%%) do lucro para gastos pessoais.", lucro*LIMITE_RETIRADA/100);
	}
	else 
	{
	 	printf("Retirar apenas R$ %.2f do lucro para gastos pessoais.", RETIRADA_MINIMA);
	}
}
