#include <stdio.h>

/*Faça um programa que leia do teclado as 3 notas bimestrais de um aluno, calcule a
média e imprima se o aluno está aprovado ou vai para a prova final, sendo a média
para aprovação igual a 7.*/

void main()
{

float nota1, nota2, nota3, media; 

printf("Insira a primeira nota: ");
scanf("%f", &nota1);

printf("Insira a segunda nota: "); 
scanf("%f", &nota2);

printf("Insira a terceira nota: ");
scanf("%f", &nota3);


media = (nota1 + nota2 + nota3)/3;


if(media>=7)
	printf("O aluno foi aprovado!");
	
else
	printf("O aluno nao foi aprovado.");

}
