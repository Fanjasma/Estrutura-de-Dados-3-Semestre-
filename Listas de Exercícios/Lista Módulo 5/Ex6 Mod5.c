#include <stdio.h>

/* Em uma universidade, um aluno faz duas provas em um curso semestral, sendo
necess�rio obter m�dia 7 para ser aprovado. Um aluno que j� fez a primeira prova
deseja saber quanto ele precisa tirar na pr�xima para ser aprovado. Fa�a um
programa que leia a nota da primeira prova desse aluno e imprima quantos pontos ele
precisa tirar ou avise se ele j� est� na prova final. */

void main()
{
float nota1, notaNecessaria; 

printf("Insira a sua primeira nota: ");
scanf("%f", &nota1); 

notaNecessaria = 14 - nota1;

if (notaNecessaria>10)
	printf("O aluno ja esta na prova final.");
	
else 
	printf("O aluno precisa tirar pelo menos %f para ser aprovado.", notaNecessaria);
}
	
