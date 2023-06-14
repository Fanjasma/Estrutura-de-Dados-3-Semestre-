/*Faça um programa que leia um conjunto de números positivos, sendo o conjunto
destes números finalizado quando for digitado um número negativo. Ao final, imprima
o maior e o menor número lido, e a média deles.*/

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


