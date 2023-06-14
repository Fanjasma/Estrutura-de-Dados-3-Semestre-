/* 8. Um shopping está fazendo uma promoção na qual o cliente que fizer compras de
valor até R$100,00 ganha um cupom para concorrer a um carro e se ele comprar
acima de R$100,00 ganha dois cupons e um vale-desconto no total de 10% da
compra. Faça um programa que leia do teclado o total de compras e imprima se o
cliente tem direito a 1 cupom, ou a 2 cupons e o vale-desconto (nesse caso, imprima
o valor do desconto). Declare como constantes simbólicas o limite e o percentual do
desconto. */

#include <stdio.h>

void main()
{
#define valor_limite 100.0f
#define percentual_desconto 10.0f

float valor_compra;

printf("Insira o valor da sua compra: ");
scanf("%f", &valor_compra);

	if (valor_compra<=valor_limite)
		printf("Parabens, voce ganhou 1 (um) cupom!");
		
	else
		printf("Parabens, voce ganhou 2 (dois) cupons e um vale-desconto de 10%% na sua compra! Sua compra com desconto deu R$ %.2f", valor_compra - valor_compra*percentual_desconto/100);
	

}
