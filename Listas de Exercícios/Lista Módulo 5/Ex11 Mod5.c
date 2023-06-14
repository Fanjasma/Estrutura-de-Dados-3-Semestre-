/* 11. Um programa didático para crianças consiste em pedir dois números inteiros
quaisquer para a criança e depois perguntar a soma desses dois números. Se a
resposta estiver certa, o programa imprime uma mensagem de incentivo. Se não, o
programa imprime o valor correto da soma. Implemente esse programa. */

#include <stdio.h>
void main()
{
	int num_a, num_b, soma_ab, valor_tentativa;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num_a);
	printf("Insira o segundo numero: "); 
	scanf("%d", &num_b);
	
	soma_ab = num_a + num_b;
	
	printf("Digite o resultado da soma entre o primeiro e o segundo numero inseridos: ");
	scanf("%d", &valor_tentativa);
	
	if (valor_tentativa == soma_ab)
	{
		printf("Parabens, voce acertou o resultado da soma!");
	}
	else 
	{
		printf("O valor da soma entre os numeros inseridos eh de %d. Tente novamente.", soma_ab);
	}
}
