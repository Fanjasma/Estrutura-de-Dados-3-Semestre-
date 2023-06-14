// Crie um vetor que armazene dados de 10 funcionários de uma empresa. Deverão ser
// considerados os campos: código funcional, nome, salário e data de admissão.
// Elabore um programa que: preencha o vetor com os dados fornecidos pelo usuário e
// ordene de forma crescente os elementos pelo campo de código funcional, usando o
// quick sort.

#include <iostream>
#include <vector>
#include <string>

using namespace std;



struct Funcionario{
    string codigoFuncional, nome, dataDeAdmissao;
    float salario;
};


void troca(vector<Funcionario> &funcionarios, int i, int j)
{
    Funcionario aux;
    aux = funcionarios[i];
    funcionarios[i] = funcionarios[j];
    funcionarios[j] = aux;
}

int particao(vector<Funcionario> &funcionarios, int p, int r)
{
    string pivo;
    int i, j;
    pivo = funcionarios[(p+r)/2].codigoFuncional;
    i = p-1;
    j = r+1;
    while(i<j)
    {
        do{
            j = j - 1;
        }while(funcionarios[j].codigoFuncional > pivo);

        do{
            i = i + 1;
        }while(funcionarios[i].codigoFuncional < pivo);

        if(i < j) troca (funcionarios,i,j);
    }
    return j;
}

void quicksort(vector<Funcionario> &funcionarios, int p, int r)
{
    int q;
    if(p < r)
    {
        q = particao(funcionarios,p,r);
        quicksort(funcionarios,p,q);
        quicksort(funcionarios,q+1,r);
    }
}

int main()
{

    Funcionario umFuncionario;
    vector<Funcionario> funcionarios;

    umFuncionario.codigoFuncional = "A1234";
    umFuncionario.nome = "Jonas";
    umFuncionario.dataDeAdmissao = "20/14/2017";
    umFuncionario.salario = 1000;

    funcionarios.push_back(umFuncionario);

    umFuncionario.codigoFuncional = "B1234";
    umFuncionario.nome = "Jonas";
    umFuncionario.dataDeAdmissao = "20/14/2017";
    umFuncionario.salario = 1000;

    funcionarios.push_back(umFuncionario);

    umFuncionario.codigoFuncional = "K234";
    umFuncionario.nome = "Jonas";
    umFuncionario.dataDeAdmissao = "20/14/2017";
    umFuncionario.salario = 1000;

    funcionarios.push_back(umFuncionario);

    umFuncionario.codigoFuncional = "CDASFA";
    umFuncionario.nome = "Jonas";
    umFuncionario.dataDeAdmissao = "20/14/2017";
    umFuncionario.salario = 1000;

    funcionarios.push_back(umFuncionario);

    umFuncionario.codigoFuncional = "T123";
    umFuncionario.nome = "Jonas";
    umFuncionario.dataDeAdmissao = "20/14/2017";
    umFuncionario.salario = 1000;

    funcionarios.push_back(umFuncionario);

    quicksort(funcionarios, 0, 4);
    for(int i = 0; i < (int)funcionarios.size(); i++)
        cout << funcionarios[i].nome << ", " << funcionarios[i].codigoFuncional << " anos." << endl;

    cout << endl << endl;

    return 0;
}