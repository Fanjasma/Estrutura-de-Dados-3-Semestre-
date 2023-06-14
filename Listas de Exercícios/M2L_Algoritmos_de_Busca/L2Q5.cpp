#include <iostream>

using namespace std;


#define MAX 15

void entradaDeDados(int* vetor, int* valorProcurado)
{
    for(int i = 0; i < MAX; i++)
    {
        cout << "Insira o codigo numero " << i+1 << " num vetor de tamanho " << MAX << ": ";
        cout << "Insira o codigo numero " << i+1 << " num vetor de tamanho " << MAX << ": ";
        cin >> vetor[i];
    }
    cout << "Insira um codigo a ser procurado no vetor inserido: ";
    cin >> *valorProcurado;
}

int main()
{

    return 0;
}