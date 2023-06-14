/* 10. Em uma loja de eletroeletrônicos, um vendedor que consiga vender mais de R$
3.000,00 por mês recebe como comissão 5% do valor vendido. Abaixo disso, ele não
recebe nenhuma comissão. Faça um programa que leia do teclado o total de vendas
mensais de um vendedor e imprima se ele tem direito a comissão e, se tiver, de
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
