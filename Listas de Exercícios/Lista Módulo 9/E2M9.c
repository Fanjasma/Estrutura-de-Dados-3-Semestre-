#include <stdio.h>
#define MAX 100

void main()
{
	char frase[MAX]; 
	int i, impar[MAX];
	
	
	//Codifica��o
	do{
		printf("Qual a frase? ");
		gets(frase);
	}while (frase[0] == '\0');
	
	
	//Inicializando vetor "impar"
	for (i=0;i<MAX && frase[i] != '\0'; i++)
	{
		impar[i] = 0;
	}
	
	for (i=0; i<MAX && frase[i] != '\0'; i++)
	{
		if (frase[i]%2 != 0)
		{
			impar[i] = 1;
			frase[i] /= 2;
		}
			
		else 
			frase[i] -=  3;
			
	}
	
	//Impress�o do c�digo
	printf("A frase codificada eh: %s\n", frase);
	
	//Decodifica��o
	for (i=0; i<MAX && frase[i] != '\0'; i++)
	{
		if (impar[i] == 1)
			frase[i] = frase[i]*2+1;
		else 
			frase[i] += 3;
	}
		
	//Impress�o da solu��o do c�digo
	printf("A frase decodificada eh: %s\n", frase);
	
}
