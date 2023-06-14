/* 22. Desejamos calcular, a partir do sexo e da altura, o peso ideal de uma pessoa. Para
isto, devemos saber que existem duas fórmulas para o peso ideal, que são:
• Homens: (72,7 * altura) - 58
• Mulheres: (62,1 * altura) - 44,7
Para que uma pessoa seja considerada obesa, a diferença entre o seu peso e o peso
ideal deve ser superior à 40 Kg. Elabore um programa que leia o sexo, o peso e a
altura de uma pessoa, imprima o peso ideal e informe se a pessoa está abaixo do
peso ideal, acima do peso ideal ou obesa. */

#include <stdio.h>
#define MASCULINO 'M'
#define FEMININO 'F'
#define OBESO 40.


void main()
{
	char sexo;
	float altura, peso, peso_ideal;
	
	printf("Insira seu sexo: ");
	scanf("%c", &sexo);
	
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	
	printf("Insira seu peso: ");
	scanf("%f", &peso);
	
	switch(sexo)
	{
		case MASCULINO: 
			peso_ideal = (72,77 * altura) - 58;
			
			if (peso - peso_ideal > OBESO)
				printf("A pessoa esta obesa.");
				
			else if (peso>peso_ideal)
				printf("A pessoa esta acima do peso ideal.");
				
			else
				printf("A pessoa esta abaixo do peso ideal.");
		break;
			
		
		case FEMININO:
			peso_ideal = (62,1* altura) - 44,7;
			
			if (peso - peso_ideal > OBESO)
				printf("A pessoa esta obesa.");
				
			else if (peso>peso_ideal)
				printf("A pessoa esta acima do peso ideal.");
				
			else
				printf("A pessoa esta abaixo do peso ideal.");
		break;
		
		default:
			printf("Selecione um sexo valido.");
		
	}
	
	
}
