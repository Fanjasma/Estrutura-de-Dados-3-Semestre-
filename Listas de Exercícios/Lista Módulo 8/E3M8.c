/*3. Fa�a um programa para corrigir uma prova de m�ltipla escolha de 10 quest�es, cujo
gabarito � b, c, d, a, a, e, b, d, a, c. Cada quest�o vale 1,0 ponto e a nota ser� de 0,0 a
10,0. O programa deve ler do teclado o n�mero de matr�cula de at� 30 alunos em um
vetor e suas respectivas respostas em uma matriz (que devem obrigatoriamente estar
entre �a� e �e�. A seguir, o programa deve calcular e imprimir:
a. Para cada aluno, seu n�mero e nota.
b. A porcentagem de alunos aprovados, sendo a menor nota para aprova��o
igual a 6,0. */

#include <stdio.h>

#define MAX_ALUNOS 30

void main()
{
	char gabarito[] = {b,c,d,a,a,e,b,d,a,c};
	int num_alunos;
	
	do{
		printf("Insira o numero de alunos: ");
		scanf("%d", num_alunos);
		if(num_alunos<0 || num_alunos>MAX_ALUNOS)
			printf("\tValor invalido. Tente novamente.");
	}while(num_alunos<0 || num_alunos>MAX_ALUNOS);
	
	
	
	
	
}
