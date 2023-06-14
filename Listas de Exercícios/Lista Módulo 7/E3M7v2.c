/*3. Uma companhia a�rea mant�m uma lista de voos previstos, identificados pelo
n�mero de voo e outra para a quantidade de lugares ainda dispon�veis em cada voo.
Cada avi�o leva um total de at� 345 passageiros. Fa�a um programa que:

a. Inicialize a lista de voos para os valores 727, 442, 331, 447, 221, 291, inicialize a
lista de lugares dispon�veis para o valor m�ximo,
b. Mostre um menu com as seguintes op��es: listar voos previstos, fazer
reserva, cancelar reserva e sair do programa.
c. Fa�a reservas, indicando se ainda existem lugares dispon�veis no voo citado.
Se houver, o programa deve perguntar se o usu�rio quer confirmar a reserva.
Se quiser, o n�mero de lugares dispon�veis para aquele voo deve ser
decrementado.
d. Desfa�a reservas, incrementado o n�mero de lugares dispon�veis no voo
correspondente.

___________________________________________________________________________

NOTA:

Praticamente terminado. 

Problemas:
1. Muitas linhas de c�digo, 
2. sem prote��o de entrada pra algumas coisas, 
3. Sem maneira de dizer se o voo existe ou n�o,
4. Sem default (s� colocar um printf e um break).

*/ 
 
#include <stdio.h>

#define MAXPASS 345


void main()
{

	int lista_voos[] = {727, 442, 331, 447, 221, 291},	//Lista de voos
	num_lugares[] = {345, 345, 345, 345, 345, 345},		//N�mero de lugares em cada voo
	i, 													//Contador
	opcao, 												//Op��o do Menu(Tentar usar isso pra reservar voo depois)
	reserva, 											//N�mero do voo a ser reservado
	confirmacao; 										//Confirmacao do usuario para reservar lugar
	
	
	do{
		
		printf("\n\n++++++++++++++++++\n");
		printf("+ MENU DE OPCOES +\n");
		printf("++++++++++++++++++\n\n");
		
		printf("[1] Listar voos previstos\n");
		printf("[2] Fazer reserva\n");
		printf("[3] Cancelar reserva\n");
		printf("[4] Sair do programa\n\n");
		
		printf("Digite um numero correspondente a uma das opcoes acima: ");
		_flushall();
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
				
				printf("\n##Listando voos previstos...\n\n");
				
				printf("Voos previstos: ");
				for (i=0; i<6; i++)
					printf("%d ", lista_voos[i]);
			
				printf("\nLugares disponiveis: ");
				for (i=0; i<6; i++)
					printf("%d ", num_lugares[i]);
				
				printf("\n\n[Pressione qualquer tecla para continuar.]");
				_getch();
				break;
			
			case 2:
				printf("\n##Fazendo reservas...\n\n");
				
				printf("Voos previstos: ");
				for (i=0; i<6; i++)
					printf("%d ", lista_voos[i]);
					
					printf("\nDigite o valor correspondente ao voo que quer reservar: ");
					scanf("%d", &reserva);
				
				for (i=0; i<6; i++)
					if (reserva == lista_voos[i])
					{
						if (num_lugares[i]<=0)
						{
							printf("Nao ha mais lugares disponiveis.\n");
							break;
						}
								
						else //Ver se da pra colocar um protetor de input aqui
						{
							printf("Confirmar reserva? (S/N): ");
							_flushall();
							scanf("%c", &confirmacao);
								
							if(confirmacao == 'S')
							{
								printf("Reserva confirmada.");
								num_lugares[i]--;
								break;
							}
							else
								printf("Operacao de reserva cancelada.");
								break;
						}
					}
						
				printf("\n\n[Pressione qualquer tecla para continuar.]");
				getch();
				break;		
				
			case 3:
				printf("\n##Cancelando reservas...\n\n");
				
				printf("Voos previstos: ");
				for (i=0; i<6; i++)
					printf("%d ", lista_voos[i]);
					
				printf("\nDigite o valor correspondente ao voo que quer cancelar: ");
				scanf("%d", &reserva);
				
				for (i=0; i<6; i++)
					if (reserva == lista_voos[i])
					{
						if (num_lugares[i]<MAXPASS)
						{
							printf("Voo cancelado.");
							num_lugares[i]++;
							break;
						}
						
						else
						{
							printf("Nao foi reservado nenhum lugar para esse voo ainda.");
							break;
						}
					}
						
				printf("\n\n[Pressione qualquer tecla para continuar.]");
				getch();
				break;	
					
					
			case 4:
				break;
			
		}
			
	}while(opcao != 4);		

}
