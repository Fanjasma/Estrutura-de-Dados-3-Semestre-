//  Crie uma aplicação que permita inserir cerca de 8 mil números inteiros aleatórios de 1
// a 8 mil num vetor de inteiros. Faça um comparativo considerando o número de trocas
// realizadas entre os algoritmos selection sort, merge sort e quick sort. Comente as
// diferenças e considere testar com números diferentes de elementos. Dica: quando
// tiver rodando os algoritmos, evite executar outros programas na máquina.

#include <iostream>
#include <vector>
#include <string>

#define TAM 8000

using namespace std;


void intercala(vector<int> &vetor, int inicio, int fim, int meio)
{
    int posicaoLivre, inicioVetorEsquerdo, inicioVetorDireito;
    int auxiliar[TAM*2];

    inicioVetorEsquerdo = inicio;
    inicioVetorDireito = meio+1;
    posicaoLivre = inicio;

    while(inicioVetorEsquerdo <= meio && inicioVetorDireito <= fim)
    {
        
        if(vetor[inicioVetorEsquerdo] <= vetor[inicioVetorDireito])
        {
            auxiliar[posicaoLivre] = vetor[inicioVetorEsquerdo];
            inicioVetorEsquerdo++;
        }
        else
        {
            auxiliar[posicaoLivre] = vetor[inicioVetorDireito];
            inicioVetorDireito++;
        }
        
        posicaoLivre++;
    }

    for(int i=inicioVetorEsquerdo; i<=meio; i++)
    {
        auxiliar[posicaoLivre] = vetor[i];
        posicaoLivre++;
    }

    for(int i=inicioVetorDireito; i<=fim; i++)
    {
        auxiliar[posicaoLivre] = vetor[i];
        posicaoLivre++;
    }

    for(int i=inicio; i<=fim; i++)
        vetor[i] = auxiliar[i];
}

void mergeSort(vector<int> &vetor, int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        intercala(vetor, inicio, fim, meio);
    }
}

void selection_sort(vector<int> vetor){
  int i,j,eleito,maior,pos;

    for ( i=0; i<=TAM-1;i++){
      eleito = vetor[i];
      maior = vetor[i+1];
      pos = i + 1;

        for(j=i+1; j<=TAM; j++){
        if (vetor[j] < maior){
            maior = vetor[j];
            pos = j;
      }
    }
  if (maior < eleito){
    vetor[i] = vetor[pos];
    vetor[pos]=eleito;
  }
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

void quickSort(vector<int> &numeros, int p, int r)
{
    int q;
    if(p < r)
    {
        q = particao(numeros,p,r);
        quickSort(numeros,p,q);
        quickSort(numeros,q+1,r);
    }
}

int main()
{
    vector<int> numeros;
    for(int i=TAM; i>0; i--)
        numeros.push_back(i);
    
    selection_sort(numeros);
    
    for(int i=0; i<TAM; i++)
        cout << numeros[i] << " ";
}