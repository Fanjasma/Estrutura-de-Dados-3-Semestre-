#include <stdio.h>

/* Faça um programa que calcule a nota que um aluno deve tirar na terceira prova para
obter média 7, quaisquer que sejam as notas das duas primeiras provas. */

void main()
{
	
float nota1, nota2, notanecessaria; 


printf("Digite sua primeira nota:");
scanf("%f", &nota1);

printf("Digite sua segunda nota:"); 
scanf("%f", &nota2);

notanecessaria = (3*7) - nota1 - nota2;

printf("Voce precisa tirar %f na proxima prova para ter a media total de 7.", notanecessaria);

}
