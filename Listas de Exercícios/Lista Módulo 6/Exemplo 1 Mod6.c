#include <stdio.h>

#define DESCONTO_MULHER 5.f
#define DESCONTO_IDADE 4.f
#define LIMITE_IDADE 35
#define DESCONTO_CASADO 3.5f
#define PERCENTUAL_SEGURO 10
#define ANO_ATUAL 2018
#define ANO_MINIMO 1900
#define LIMITE_MAIORIDADE 18

void main()
{
	float precoCarro, seguro, desconto=0;
	char sexo, casado;
	int nascimento;
	
	//Dados de Entrada
	do{
		printf("Qual o preco do automovel? ");
		scanf("%f", &precoCarro);
		if(precoCarro<=0)
			printf("O preco do carro deve ser um valor positivo!\n");
	}while(precoCarro<=0);
	
	do{
		printf("Em que ano voce nasceu?");
		scanf("%d", &nascimento);
		if(nascimento<ANO_MINIMO || ANO_ATUAL - nascimento <= LIMITE_MAIORIDADE)
			printf("Voce digitou um ano de nascimento invalido!\n");
			
	}while(nascimento<ANO_MINIMO || ANO_ATUAL - nascimento <= LIMITE_MAIORIDADE);
		
	do{
		printf("Voce eh casado? (s/n)");
		_flushall();
		scanf("%c", &casado);
		if(casado != 's' && casado != 'n')
		printf("Voce deve digitar 's' para sim e 'n' para nao!\n");
		
	}while (casado !='s' && casado != 'n');
	
	do{
		printf("Qual o seu sexo (m/f)?");
		_flushall();
		scanf("%c", &sexo);
		if(sexo != 'f'&& sexo != 'm')
			printf("Voce deve digitar 'f' para feminimo e 'm' para masculino!\n");
	}while (sexo != 'f'&& sexo != 'm');
		//Calculo do seguro
		seguro=precoCarro*PERCENTUAL_SEGURO/100;
		
		//Calculo dos descontos
		if(sexo =='f')
			desconto += DESCONTO_MULHER;
		if(ANO_ATUAL - nascimento >= LIMITE_IDADE);
			desconto += DESCONTO_IDADE;
		if(casado == 's')
			desconto += DESCONTO_CASADO;
			
		//Valor do seguro
		printf("O valor do seguro eh de R$%.2f.\n", seguro - seguro*desconto/100);
		
	
}
