// Programa para c�lculo do novo sal�rio dos funcion�rios da empresa XYZ
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
// leitura do sal�rio
printf("Qual o seu salario? ");
scanf("%f", &salario);
// Verifica��o se o usu�rio digitou um valor v�lido para sal�rio
if(salario <= 0)
{
printf("Voce digitou um salario invalido!\n");
return;
}
// Verifica��o se o sal�rio ser� aumentado ou n�o. Se for, faz o c�lculo do novo sal�rio.
if(salario >= SALARIO_LIMITE)
printf("Voce ficarah com o mesmo salario. \n");
else
{
salario = salario + salario*PERCENTUAL_AUMENTO/100;
printf("O seu novo salario eh de R$ %.2f. \n", salario);
}
}

