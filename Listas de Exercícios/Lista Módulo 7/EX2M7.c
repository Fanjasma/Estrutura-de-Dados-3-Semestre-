#include <stdio.h>
#define NUM_ITENS 100

void main()
{
	int quantVendida[NUM_ITENS], i, n, menosVendida, maisVendida, maisAlto=0;
	float faturamento=0, preco[NUM_ITENS];
	
	printf("Qual a quantidade de itens que voce deseja registrar?\n");
	scanf("%d", &n);
	
	//pedir valor e quantidade
	for(i=0; i<n; i++)
	{
		do
		{
			printf("Digite aqui o valor da mercadoria %d:\n", i+1);
			scanf("%f", &preco[i]);
			if(preco[i] < 0)
				printf("Valor invalido. Digite novamente!\n");
		} while(preco[i] < 0);
		
		do
		{
			printf("Digite aqui a quantidade vendida da mercadoria %d:\n", i+1);
			scanf("%d", &quantVendida[i]);
			if(quantVendida[i] <= 0)
				printf("Quantidade invalida. Digite novamente!\n");
		} while(quantVendida[i] <= 0);
	
	faturamento+= preco[i]*quantVendida[i];

	}
	//registrar o mais vendido e menos vendido
	maisVendida=menosVendida=0;
	for(i=0; i<n; i++)
	{
		if(quantVendida[i] > quantVendida[maisVendida])
			maisVendida=i;
		
		if(quantVendida[i] > quantVendida[menosVendida])
			menosVendida=i;
		
	}
	
	//preço mais alto que o preço da mercadoria menos vendida, se preco i for maior que preco menos vendido, ele vai contando.
	for(i=0; i<n; i++)
	if(preco[i] > preco[menosVendida])
		maisAlto++;
}
