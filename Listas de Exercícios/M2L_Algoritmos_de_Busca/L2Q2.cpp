// Implemente um programa estruturado e recursivo para pesquisa binária. Faça uma
// função de busca chamada pesquisaBR que receba como parâmetro o valor a ser
// encontrado e a referência do vetor onde a busca será efetuada. A função retornará -1,
// caso não encontre o item, ou retornará o índice, caso o encontre.

#include <iostream>

using namespace std;

#define MAX 10
#define INICIO_CARACTERES_MINUSCULOS 32

void entradaDeDados(int* vetor, int* valorProcurado)
{
    for(int i = 0; i < MAX; i++)
    {
        cout << "Insira o " << i+1 << "o. numero num vetor de tamanho " << MAX << ": ";
        cin >> vetor[i];
    }
    cout << "Insira um valor a ser procurado no vetor inserido: ";
    cin >> *valorProcurado;
}

int pesquisaBR(int* vetor, int valor, int inicio, int fim) {
    if (inicio > fim) 
        return -1; 
    
    int meio = (inicio + fim) / 2;
    if (vetor[meio] == valor) {
        return meio; 
    }
    else if (vetor[meio] > valor) {
        return pesquisaBR(vetor, valor, inicio, meio - 1); 
    }
    else {
        return pesquisaBR(vetor, valor, meio + 1, fim); 
    }
}

void bubbleSort(vector<int> &umVetor)
{
    const int tamanho = umVetor.size();
    bool troca = true;

    for(int i=0; i<(tamanho - 1) && troca == true; i++)
    {
        troca = false;

        for(int j=0; j<tamanho; j++)
            if(umVetor[i] > umVetor[i+1])
            {
                troca = true;
                swap(umVetor[i], umVetor[i+1]);
            }
    }
}

int main()
{
    int umVetor[MAX], valorProcurado;

    entradaDeDados(umVetor, &valorProcurado);
    
    cout << endl << "Valor encontrado no indice " << pesquisaBR(umVetor, valorProcurado, 0, MAX-1);

    return 0;
}