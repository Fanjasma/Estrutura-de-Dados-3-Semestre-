// Programa para cálculo do novo salário dos funcionários da empresa XYZ
#include <stdio.h>
#define SALARIO_LIMITE 2000.f
#define PERCENTUAL_AUMENTO 30

void main()
{
float salario;
/* Apresentacao do programa
*/
printf("++++++++++++++++++++++++++++++++++++++\n");
printf("Calculo do Novo Salario da Empresa XYZ \n");
printf("++++++++++++++++++++++++++++++++++++++\n\n\n");
// leitura do salário
printf("Qual o seu salario? ");
scanf("%f", &salario);
// Verificação se o usuário digitou um valor válido para salário
if(salario <= 0)
{
printf("Voce digitou um salario invalido!\n");
return;
}
// Verificação se o salário será aumentado ou não. Se for, faz o cálculo do novo salário.
if(salario >= SALARIO_LIMITE)
printf("Voce ficarah com o mesmo salario. \n");
else
{
salario = salario + salario*PERCENTUAL_AUMENTO/100;
printf("O seu novo salario eh de R$ %.2f. \n", salario);
}
}

