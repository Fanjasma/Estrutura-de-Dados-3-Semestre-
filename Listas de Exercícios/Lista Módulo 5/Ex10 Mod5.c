/* 10. Em uma loja de eletroeletr�nicos, um vendedor que consiga vender mais de R$
3.000,00 por m�s recebe como comiss�o 5% do valor vendido. Abaixo disso, ele n�o
recebe nenhuma comiss�o. Fa�a um programa que leia do teclado o total de vendas
mensais de um vendedor e imprima se ele tem direito a comiss�o e, se tiver, de
quanto. */ 

#include <stdio.h>

void main()
{
	#define MIN_NECESSARIO 3000.0f
	#define PORCENTAGEM_COMISSAO 5
	
	float total_vendido;
	
	printf("Insira o total vendido por um vendedor: ");		
	scanf("%f", &total_vendido);
	
	if (total_vendido > MIN_NECESSARIO)
		printf("O vendedor tem direito a comissao. O valor da comissao eh de R$ %.2f", total_vendido*PORCENTAGEM_COMISSAO/100);
	else
		printf("O vendedor nao tem direito a comissao.");
}
