
#include <stdio.h>
#define NUM_PASSAGEIROS 345
#define QTDADE_VOOS 6
#define LISTAR 1
#define RESERVA 2
#define CANCELAR 3

void main()
{
	int voosPrevistos[] = {727,442,331,447,221,291},
	lugaresDisponiveis[] = {NUM_PASSAGEIROS,NUM_PASSAGEIROS,NUM_PASSAGEIROS,NUM_PASSAGEIROS,NUM_PASSAGEIROS,NUM_PASSAGEIROS},
	i, //Contador.
	opcao, //Opção do menu.
	certeza, //Confirma a reserva ou não.
	voo, //Voo escolhido pelo usuário.
	posicaoVoo=-1; //Índice do voo escolhido pelo usuário.
	
	do{
		do{
			printf("Digite um valor para acessar a funcao correspondente: ");
			printf("\n> LISTAR VOOS PREVISTOS (1)\n");
			printf("> FAZER RESERVA (2)\n");
			printf("> CANCELAR RESERVA (3)\n");
			printf("> SAIR DO PROGRAMA (4)\n");
			_flushall();
			scanf("%d", &opcao);
			
			if (opcao > 4 || opcao < 1)
				printf("\nDigite um valor valido.\n");
				
		}while (opcao > 4 || opcao < 1);
		
		switch(opcao)
		{
			case LISTAR:
				printf("\n\n# Listando voos:\n");
				printf("Voo\t\tLugares disponiveis\n");
				for(i=0; i<QTDADE_VOOS ;i++)
					printf("%d\t\t%d\n", voosPrevistos[i], lugaresDisponiveis[i]);
			break;
			
			case RESERVA:
				printf("\n\n# Fazendo reserva:\n");
				
				printf("Digite o codigo do voo: ");
				scanf("%d", &voo);
				
				for(i=0; i<QTDADE_VOOS; i++)
				{
					if(voosPrevistos[i] == voo)
						posicaoVoo = i;
				}
				if(posicaoVoo == -1)
				{
					printf("\t\nVoo nao encontrado!\n");
					break;
				}
				do{
					printf("Voce tem certeza da reserva? (1- sim e 2 - nao)");
					scanf("%d", &certeza);
					if(certeza<1 || certeza>2)
						printf("\t\nValor invalido!\n");
				}while (certeza<1 || certeza>2);
				
				if(certeza==1 && lugaresDisponiveis[posicaoVoo]>0)
				{
					lugaresDisponiveis[posicaoVoo]--;
					printf("\n Reserva efetuada!\n");
				}
				
			case CANCELAR:
				printf("\n\n# Cancelando reserva:\n");
				
				printf("Digite o codigo do voo: ");
				scanf("%d", &voo);
				
				for(i=0; i<QTDADE_VOOS; i++)
				{
					if(voosPrevistos[i] == voo)
						posicaoVoo = i;
				}
				if(posicaoVoo == -1)
				{
					printf("\t\nVoo nao encontrado!\n");
					break;
				}
				
				if(lugaresDisponiveis[posicaoVoo]<NUM_PASSAGEIROS)
				{
					lugaresDisponiveis[posicaoVoo]++;
					printf("\nCancelamento efetuado!\n");
				}
				else
				{
					printf("\nO voo ja estah vazio!\n");
					posicaoVoo=-1;
				}
				break;
				
				default:
					printf("\n\nEncerrando o programa...\n\n");
		}
	}while(opcao!=4);
	
}
