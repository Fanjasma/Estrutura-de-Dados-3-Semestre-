#include <stdio.h>
void main()

{
	int n=1, maior=0, menor; 
	
	while(n > 0){
		
		printf("Digite um numero:");
        scanf("%d", &n);
		
        if (maior==0)
        {
        	maior = n;
        	menor = n;
    	}
    	
		if (n > maior)
			maior = n;
		
		if (n < menor && n > 0)
			menor = n;
		
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);	
	printf("Media: %d", (maior + menor)/2);
}
