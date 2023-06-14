// Elabore um programa que implemente um vetor de estruturas com os seguintes
// dados: nome, idade e sexo. O programa deve apresentar os dados em:
// a. Ordem crescente alfabética de nome (use o quick sort).
// b. Ordem decrescente de idade (use o bubble sort).


#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Funcionario{
    string nome, sexo;
    int idade;
};

void troca(vector<Funcionario> &pessoas, int i, int j)
{
    Funcionario aux;
    aux = pessoas[i];
    pessoas[i] = pessoas[j];
    pessoas[j] = aux;
}

int particao(vector<Funcionario> &pessoas, int p, int r)
{
    string pivo;
    int i, j;
    pivo = pessoas[(p+r)/2].nome;
    i = p-1;
    j = r+1;
    while(i<j)
    {
        do{
            j = j - 1;
        }while(pessoas[j].nome > pivo);

        do{
            i = i + 1;
        }while(pessoas[i].nome < pivo);

        if(i < j) troca (pessoas,i,j);
    }
    return j;
}

void quicksort(vector<Funcionario> &pessoas, int p, int r)
{
    int q;
    if(p < r)
    {
        q = particao(pessoas,p,r);
        quicksort(pessoas,p,q);
        quicksort(pessoas,q+1,r);
    }
}

void ordenaDecrescente(vector<Funcionario> &pessoas)
{
    Funcionario aux;
   
    for(int i = 0; i < (int)pessoas.size(); i++)
        for(int j = 0; j < (int)pessoas.size()-1; j++)
            if(pessoas[j].idade < pessoas[j+1].idade)
            {
                aux = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = aux; 
            }
}

int main()
{
    Funcionario umaPessoa;
    vector<Funcionario> pessoas;

    umaPessoa.nome = "Jonas";
    umaPessoa.idade = 12;
    umaPessoa.sexo = "Masculino";
    
    pessoas.push_back(umaPessoa);
    
    umaPessoa.nome = "APedro";
    umaPessoa.idade = 10;
    umaPessoa.sexo = "Masculino";

    pessoas.push_back(umaPessoa);

    umaPessoa.nome = "ARicardo";
    umaPessoa.idade = 30;
    umaPessoa.sexo = "Masculino";

    pessoas.push_back(umaPessoa);

    umaPessoa.nome = "AMaria";
    umaPessoa.idade = 10;
    umaPessoa.sexo = "Feminino";

    pessoas.push_back(umaPessoa);

    umaPessoa.nome = "BJoao";
    umaPessoa.idade = 10;
    umaPessoa.sexo = "Masculino";

    pessoas.push_back(umaPessoa);

    //ordenaDecrescente(pessoas);
    quicksort(pessoas, 0, 4);
    for(int i = 0; i < (int)pessoas.size(); i++)
        cout << pessoas[i].nome << ", " << pessoas[i].idade << " anos." << endl;

    cout << endl << endl;

    // for(int i = 0; i < (int)pessoas.size(); i++)
    //     cout << pessoas[i].nome << ", " << pessoas[i].idade << " anos." << endl;




    return 0;
}