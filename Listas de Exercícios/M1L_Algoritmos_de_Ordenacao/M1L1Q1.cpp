// Faça um programa que cadastre o nome e o salário de 5 funcionários. Usando um
// método de ordenação diferente para cada item a seguir, liste todos os dados dos
// funcionários das seguintes formas:
//  a. Em ordem crescente de salário;
//  b. Em ordem decrescente de salário;
//  c. Em ordem alfabética.

#include <iostream>
#include <string>

using namespace std;

#define TAM 5

struct Funcionario{
    string nome;
    float salario;
};

void cadastraFuncionario(Funcionario* funcionarios);
void listaSalCrescente(Funcionario* funcionarios);      //Bubble Sort v0
void listaSalDecrescente(Funcionario* funcionarios);   //Bubble Sort v1
void listaAlfabetica(Funcionario* funcionarios);        //Bubble Sort v2

int main()
{
    Funcionario funcionarios[TAM];

    for(int i=0; i<TAM;i++)
    {
        funcionarios[i].salario = (i+1)*1000;
    }

    cadastraFuncionario(funcionarios);
    listaSalCrescente(funcionarios);
    listaSalDecrescente(funcionarios);
    listaAlfabetica(funcionarios);

    return 0;
}

void cadastraFuncionario(Funcionario* funcionarios)
{
    for(int i=0;i<TAM;i++)
    {
        cout << "Digite o NOME do funcionario numero " << i+1 << ": ";
        _flushall();
 		getline(cin, funcionarios[i].nome);
        cout << "Digite o SALARIO do funcionario numero " << i+1 << ": ";
        cin >> funcionarios[i].salario; 
    }
}

void listaSalCrescente(Funcionario* funcionarios)
{
    float aux;
    for(int i=0;i<TAM;i++)
        for(int j=0; j<TAM-1;j++)
            if(funcionarios[j].salario > funcionarios[j+1].salario)
            {
                aux = funcionarios[j].salario;
                funcionarios[j].salario = funcionarios[j+1].salario;
                funcionarios[j+1].salario = aux;
            }

    for(int i=0;i<TAM;i++)
        cout << funcionarios[i].salario << " ";
    cout << endl;
}

void listaSalDecrescente(Funcionario* funcionarios)
{
    float aux;
    for(int i=TAM-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(funcionarios[j].salario < funcionarios[j+1].salario)
            {
                aux = funcionarios[j].salario;
                funcionarios[j].salario = funcionarios[j+1].salario;
                funcionarios[j+1].salario = aux;
            }

    for(int i=0;i<TAM;i++)
        cout << funcionarios[i].salario << " ";
    cout << endl;
}

void listaAlfabetica(Funcionario* funcionarios)
{
    string aux;
    float troca=1;

    for(int i=0;i<TAM && troca==1;i++)
    {
        troca=0;
        for(int j=0;j<TAM-1; j++)
            if(funcionarios[j].nome>funcionarios[j+1].nome)
            {
                troca=1;
                aux = funcionarios[j].nome;
                funcionarios[j].nome = funcionarios[j+1].nome;
                funcionarios[j+1].nome = aux;
            }
    }

    for(int i=0;i<TAM;i++)
        cout << funcionarios[i].nome << " ";
    cout << endl;
  
}
