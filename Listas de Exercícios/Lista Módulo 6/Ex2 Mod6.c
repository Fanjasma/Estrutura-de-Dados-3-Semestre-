/*Fa�a um programa que leia um conjunto de n�meros positivos, sendo o conjunto
destes n�meros finalizado quando for digitado um n�mero negativo. Ao final, imprima
o maior e o menor n�mero lido, e a m�dia deles.*/

#include <stdio.h>
void main()

{
	int n, maior, menor, quant=0, soma; 
	
	while(n >= 0){
		
		printf("Digite um numero: ", &n);
        scanf("%d", &n);
		     
        if (quant==0)
        {
        	maior = n;
        	menor = n;
    	}
    	
		if (n > maior)
			maior = n;
			
		
		if (n < menor && n >= 0)
			menor = n;
			
		soma = n + soma;
		quant=quant+1;

		
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);	
	printf("Media: %d", (soma)/quant);
}


