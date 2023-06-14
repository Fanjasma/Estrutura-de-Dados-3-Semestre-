// 8. Faça um programa que calcule o Máximo Divisor Comum entre dois números. 

#include <stdio.h>
void main()
{
	int r, a, b;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &a);
	printf("Insira o segundo numero: "); 
	scanf("%d", &b);
	
	while (b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}	
	
	printf("\nMDC: %d", a);
		
}
