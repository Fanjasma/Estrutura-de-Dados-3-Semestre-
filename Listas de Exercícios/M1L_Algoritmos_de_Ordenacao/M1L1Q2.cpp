// Faça um programa que cadastre 10 números, ordene-os pelo bubble sort e em
// seguida encontre e mostre:
//  a. O menor número e quantas vezes ele aparece no vetor.
//  b. O maior número e quantas vezes ele aparece no vetor.

#include <iostream>

using namespace std;

#define TAM 10

void cadastraNumeros(int* numeros);
void mostraMenorEMaior(int* numeros);

int main()
{
    int numeros[TAM] = {5,7,8,4,4,8,9,3,1,1};
    mostraMenorEMaior(numeros);
}

void cadastraNumeros(int* numeros)
{
    for(int i=0; i<TAM; i++)
    {
        cout << "Insira o " << i+1 << ".o numero: "; 
        cin >> numeros[i];
    }
}

void mostraMenorEMaior(int* numeros)
{
    int aux, menor, maior, qntdMenor=0, qntdMaior=0;
    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM-1;j++)
            if(numeros[j] > numeros[j+1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j+1]; 
                numeros[j+1] = aux; 
            }
    
    maior = numeros[TAM-1];
    menor = numeros[0];

    for(int i=0; i<TAM; i++)
    {
        if(numeros[i]==menor)
            qntdMenor++;
        if(numeros[i]==maior)
            qntdMaior++;

        cout << numeros[i] << " ";
    }

    cout << endl;
    cout << "O menor numero eh o '" << menor << "', que aparece " << qntdMenor << " vez(es)." << endl;
    cout << "O menor numero eh o '" << maior << "', que aparece " << qntdMaior << " vez(es)." << endl;
}