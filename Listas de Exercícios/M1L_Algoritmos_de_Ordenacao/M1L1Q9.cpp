#include <iostream>
#include <vector>
#include <string>

#define TAM 10000

// Crie uma aplicação que permita inserir cerca de 10 mil números inteiros aleatórios de
// 1 a 10 mil num vetor de inteiros. Registre o tempo de início e término da operação de
// ordenação e compare essas diferenças entre os algoritmos bubble sort, insertion sort
// e quick sort. Comente as diferenças e considere testar com números diferentes de
// elementos. Dica: quando tiver rodando os algoritmos, evite executar outros
// programas na máquina.

using namespace std;

void bubbleSort(vector<int> &numeros)
{
    int aux;

    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM-1;j++)
            if(numeros[j] > numeros[j+1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j+1]; 
                numeros[j+1] = aux; 
            }
}

void insertionSort(vector<int> &numeros){
    int i,j,eleito;

    for(i=1; i<=TAM-1; i++){
        eleito = numeros[i];
        j= i - 1;

    while(j >= 0 && numeros[j] > eleito){
        numeros[j+1] = numeros[j];
        j = j - 1;
    }
    numeros[j + 1] = eleito;
  }
}

void troca(vector<int> &numeros, int i, int j)
{
    int aux;
    aux = numeros[i];
    numeros[i] = numeros[j];
    numeros[j] = aux;
}

int particao(vector<int> &numeros, int p, int r)
{
    int pivo, i, j;
    pivo = numeros[(p+r)/2];
    i = p-1;
    j = r+1;
    while(i<j)
    {
        do{
            j = j - 1;
        }while(numeros[j] > pivo);

        do{
            i = i + 1;
        }while(numeros[i] < pivo);

        if(i < j) troca (numeros,i,j);
    }
    return j;
}

void quicksort(vector<int> &numeros, int p, int r)
{
    int q;
    if(p < r)
    {
        q = particao(numeros,p,r);
        quicksort(numeros,p,q);
        quicksort(numeros,q+1,r);
    }
}

int main()
{
    vector<int> numeros;
    for(int i=TAM; i>0; i--)
        numeros.push_back(i);
    
    //quicksort(numeros,0,TAM-1);
    insertionSort(numeros);

    for(int i=0; i<TAM; i++)
        cout << numeros[i] << " ";
}