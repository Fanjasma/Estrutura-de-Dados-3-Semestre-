// Programa para c�lculo do novo sal�rio dos funcion�rios da empresa soft-soft
#include <stdio.h>
#define PERCENTUAL1 50
#define PERCENTUAL2 20
#define PERCENTUAL3 15
#define LIMITE1 3000
#define LIMITE2 10000

#define SALARIO_MINIMO 130.f
void main()
{
float salario;
// Apresentacao do programa
printf("+++++++++++++++++++++++++++++++++++++++++\n");
printf("Calculo do Novo Salario dos Funcionarios Soft Soft \n");
printf("++++++++++++++++++++++++++++++++++++++++++\n\n\n");
// leitura do sal�rio
printf("Qual o seu salario? ");
scanf("%f", &salario);
// Verifica��o se o usu�rio digitou um valor v�lido para sal�rio
if(salario < SALARIO_MINIMO)
{
printf("Voce digitou um salario invalido!\n");
return;
}
// C�lculo do novo sal�rio, de acordo com o valor atual deste.
if (salario < LIMITE1)
{
salario = salario + salario*PERCENTUAL1/100;
printf("Voce terah um aumento de %d %% ", PERCENTUAL1);
printf(" e seu novo salario eh de %.2f\n", salario);
}
else if (salario < LIMITE2)
{
salario = salario + salario*PERCENTUAL2/100;
printf("Voce terah um aumento de %d %% ", PERCENTUAL2);
printf(" e seu novo salario eh de %.2f\n", salario);
}
else
{
salario = salario + salario*PERCENTUAL3/100;
printf("Voce terah um aumento de %d %% ", PERCENTUAL3);
printf(" e seu novo salario eh de %.2f\n", salario);
}
}
