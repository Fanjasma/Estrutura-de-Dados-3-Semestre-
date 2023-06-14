#include <stdio.h>

void main()
{
	float nota, soma=0;
	int i;
	
	for (i=0;i<4;i++)
	{
		do{
			printf("Insira a nota %d: ", i+1);
			scanf("%f", &nota);
			if(nota<0 || nota>10)
				printf("Nota invalida\n");
				
		}while (nota<0 || nota>10);
		
		soma+=nota;	
	}
		printf("A media eh igual a: %.2f", soma/4);	
}
