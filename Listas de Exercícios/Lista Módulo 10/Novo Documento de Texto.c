
#include <stdio.h>
#include <math.h>


void main()
{
	float x, y, *p1, *p2;
	p1 = &y;
	p2 = &x;
	
	//O que será impresso se o usuário digitar 10 e 20? Ou 3 e -8?
	printf("Forneca um numero: ");
	scanf("%f", p1);
	printf("Forneca outro numero: ");
	scanf("%f", p2);
	
	y = *p1+x;
	*p2 = 2*y;
	
	printf("x = %f\n",x);
	printf("*p1 = %f\n",*p1);
	printf("y = %f\n",y);
	printf("*p2 = %f\n",*p2);
	
	
	
}



