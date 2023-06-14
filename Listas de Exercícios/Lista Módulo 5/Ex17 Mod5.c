/*17. Uma empresa decidiu dar um bônus de Natal aos seus funcionários, cujo valor é
definido do seguinte modo:

a. Funcionários do sexo masculino com tempo de casa superior à 15 anos terão
direito à um bônus de 15% do seu salário.
b. Funcionárias com tempo de casa superior à 10 anos terão direito a um bônus
de 25% do seu salário.
c. Demais funcionários receberão um bônus de R$ 500,00

Elabore um programa que leia os dados necessários e calcule o bônus à que tem
direito o empregado.*/

#include <stdio.h>

#define MASCULINO 'M'
#define FEMININO 'F'
#define TEMPODECASA_A 15
#define TEMPODECASA_B 10
#define BONUS_A 15
#define BONUS_B 25
#define BONUS_C 500


void main()
{
	
	char sexo;
	int tempo_trabalhado, bonus, salario;
	
	printf("Qual o seu sexo? Escreva \"F\" para feminino, \"M\" para masculino.\n");
	scanf("%c", &sexo);	
	
	printf("Qual o seu salario?\n");
	scanf("%d", &salario);
	
	printf("Por quantos anos voce trabalha na empresa?\n");
	scanf("%d", &tempo_trabalhado);

	if (sexo==MASCULINO && tempo_trabalhado>TEMPODECASA_A)
		bonus = salario + salario*BONUS_A/100;
		
	else if (sexo==FEMININO && tempo_trabalhado>TEMPODECASA_B)
		bonus = salario + salario*BONUS_B/100;
	
	else 
		bonus = salario + BONUS_C; 
		
	printf("O seu novo salario com o bonus eh de %d", bonus);
	
}

