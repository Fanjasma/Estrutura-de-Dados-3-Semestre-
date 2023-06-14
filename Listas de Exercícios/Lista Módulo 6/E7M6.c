/* 7. Para fazer o balanço mensal de um armazém, faça um programa que que leia para um
número qualquer de mercadorias diferentes o preço de custo, o preço de venda e a
quantidade vendida. A partir desses dados imprima: o número total de mercadorias
diferentes lidas, o faturamento total e o lucro total do armazém. */

#include <stdio.h>

#define NAO 'n'

void main()
{
	float custo=1, preco, quant_vendida, faturamento=0, lucro=0;
	int i=0;
	char escolha;
		
	do 
	{
		i++;
		
		printf("Insira o preco de custo da mercadoria numero (%d): \n", i);
		scanf("%f", &custo);
		
		printf("Insira o preco de venda da mercadoria numero (%d): \n", i);
		scanf("%f", &preco);
		
		printf("Insira a quantidade vendida da mercadoria numero (%d): \n", i);
		scanf("%f", &quant_vendida);

		faturamento += preco*quant_vendida;
		//"lucro" aqui não é o lucro final. Serve apenas para calcular o custo total da mercadoria.
		lucro += custo*quant_vendida;
		
		printf("Deseja finalizar o programa? (s/n): \n");
		_flushall();
		scanf("%c", &escolha);
		
	} while (escolha == NAO);
	
	lucro = faturamento - lucro;
	
	printf("\n\n");
	printf("Quantidade de Produtos: %d\n", i);
	printf("Faturamento: %f\n", faturamento);
	printf("Lucro: %f\n", lucro);
	
	
}
