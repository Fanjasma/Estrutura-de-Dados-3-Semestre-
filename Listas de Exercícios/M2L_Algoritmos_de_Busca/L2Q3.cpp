// Um vetor de tamanho n, pode conter elementos do alfabeto e numerais 0 a 9. Escreva
// um algoritmo que seja capaz de localizar, pelo método binário, um caractere
// fornecido pelo usuário. Se esse caractere for uma letra, o usuário poderá fornecê-la
// para a busca no formato maiúsculo ou minúsculo.

#include <iostream>

using namespace std;

#define MAX 10
#define INICIO_CARACTERES_MINUSCULOS 32

void entradaDeDados(char* vetor, char* valorProcurado)
{
    for(int i = 0; i < MAX; i++)
    {
        cout << "Insira o " << i+1 << "o. numero num vetor de tamanho " << MAX << ": ";
        cin >> vetor[i];
    }
    cout << "Insira um valor a ser procurado no vetor inserido: ";
    cin >> *valorProcurado;

    if(isalpha(*valorProcurado))
        *valorProcurado += INICIO_CARACTERES_MINUSCULOS;
}

int pesquisaBR(char* vetor, char valor, int inicio, int fim) {
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

int main()
{
    char umVetor[MAX], valorProcurado;

    entradaDeDados(umVetor, &valorProcurado);
    cout << endl << "Valor encontrado no indice " << pesquisaBR(umVetor, valorProcurado, 0, MAX-1);

    return 0;
}