// Desenvolva uma aplicação que, dados dois vetores de inteiros quaisquer com
// tamanho de 20 elementos, gere um terceiro com os elementos de ambos em ordem
// crescente, usando o merge sort. Apresente o resultado final.


#include <iostream>
#include <vector>

using namespace std;

#define TAM 5

void concatenaVetor(int* vetorUm, int* vetorDois, int* vetorResultante)
{
    for(int i = 0; i < TAM; i++)
        vetorResultante[i] = vetorUm[i];
    for(int i = TAM; i < TAM*2; i++)
        vetorResultante[i] = vetorDois[i-TAM];
}

void intercala (int* vetor, int inicio, int fim, int meio)
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

void mergeSort(int* vetor, int inicio, int fim)
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


int main()
{
    int vetorA[TAM] = {1,2,3,4,5}, vetorB[TAM] = {6,7,8,9,0}, vetorAB[TAM*2]; 

    concatenaVetor(vetorA, vetorB, vetorAB);
    mergeSort(vetorAB, 0, TAM*2);

    for(int i = 0; i < TAM*2; i++)
        cout << vetorAB[i] << " ";
}