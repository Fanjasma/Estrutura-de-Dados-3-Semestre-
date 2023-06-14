/*Em um frigorífico, cada boi é identificado por um cartão que contém seu número e
seu peso. Faça um programa que leia os números de identificação e o peso de cada
boi e ao final imprima o número de identificação e o peso do boi mais gordo, do boi
mais magro e o total de peso dos bois do frigorífico. */

#include <stdio.h>
void main()
{
	float pesoboi, maisgordo, maismagro, pesototal;
	int i=0, idG, idM, n;

	printf("Ha quantos bois no frigorifico? ");
	scanf("%d", &n);

	do{
		printf("Insira o peso do boi ou escreva \"0\" para encerrar o programa: ");
		scanf("%f", &pesoboi);
		
		i=i+1;
		
		if (pesoboi>=maisgordo)
		{
			maisgordo=pesoboi;
			idG=i;
		}
		
		if (pesoboi<=maismagro)
		{
			maismagro=pesoboi;
			idM=i;
		}
		
			
	}while (i<n);
	
	printf("Boi mais gordo: (%d) %f kg\n", idG, maisgordo );
	printf("Boi mais magro: (%d) %f kg", idM, maismagro);
	
	
}
