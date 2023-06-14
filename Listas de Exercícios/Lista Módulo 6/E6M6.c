/*6. Um dado material radioativo perde metade de sua massa a cada 50 s. Dada a massa
inicial em gramas, fazer um algoritmo que determine o tempo necessário para que
essa massa seja menor que 0,5g. */



#define LIMITE 0.5
#include <stdio.h>

void main()
{
	float massa_material;
	int tempo=0;
	
	printf("Insira a massa do material radioativo em gramas: ");
	scanf("%f", &massa_material);
	printf("\n");
	
	printf("Massa: %f\n", massa_material);
	printf("Tempo: %ds\n\n", tempo);
	
	while (massa_material>LIMITE)
	{
		tempo += 50;
		massa_material /= 2;
		
		printf("Massa: %f\n", massa_material);
		printf("Tempo: %ds\n\n", tempo);
		
	}
}
