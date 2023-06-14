
/* 9. Em um determinado país, deve declarar imposto de renda todo cidadão com renda
anual superior à $ 23.750,00. A renda anual é a renda mensal multiplicada por 13 (12
meses mais a o 13º salário). A alíquota para quem paga é de 20%. Faça um programa
que leia do teclado a renda mensal do usuário e imprima se ele está isento ou se ele
deve fazer a declaração de renda e qual o imposto devido. Declare como constantes
simbólicas o limite para imposto: 23750; o fator de multiplicação: 13; e a alíquota:
20%. */

#include <stdio.h>

void main()
{
	#define LIMITE_IMPOSTO 23750
	#define FATOR_MULTIPLICACAO 13
	#define ALIQUOTA 20
	
	float renda_mensal;
	
	printf("Insira sua renda mensal: ");
	scanf("%f", &renda_mensal);
	
	 if (renda_mensal*FATOR_MULTIPLICACAO > LIMITE_IMPOSTO)
	    {
	        printf("Eh preciso declarar imposto de renda. O imposto devido eh o de %.2f", renda_mensal*ALIQUOTA/100);
	    }
	 else 
	    {
	        printf("Nao eh preciso declarar imposto de renda.");
	    }

}
