/*Em um frigor�fico, cada boi � identificado por um cart�o que cont�m seu n�mero e
seu peso. Fa�a um programa que leia os n�meros de identifica��o e o peso de cada
boi e ao final imprima o n�mero de identifica��o e o peso do boi mais gordo, do boi
mais magro e o total de peso dos bois do frigor�fico. */

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
