
/* 9. Em um determinado pa�s, deve declarar imposto de renda todo cidad�o com renda
anual superior � $ 23.750,00. A renda anual � a renda mensal multiplicada por 13 (12
meses mais a o 13� sal�rio). A al�quota para quem paga � de 20%. Fa�a um programa
que leia do teclado a renda mensal do usu�rio e imprima se ele est� isento ou se ele
deve fazer a declara��o de renda e qual o imposto devido. Declare como constantes
simb�licas o limite para imposto: 23750; o fator de multiplica��o: 13; e a al�quota:
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
