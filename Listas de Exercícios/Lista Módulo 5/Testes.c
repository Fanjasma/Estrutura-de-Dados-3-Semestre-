#include <stdio.h>

#define num1 1
#define num2 2
#define num3 3
#define num4 4

void main()
{
	
	int num;
	printf("Insira 1 numero: \n");
	scanf("%d", &num);
	
	switch(num)
	{
		case 10:
			printf("1");
			break;
			
		case 20:
			printf("2");
			break;
			
		case 30:
			printf("3");
			break;
			
		case 40:
			printf("4");
			break;
			
		default:
			printf("0");
	}
	
}
