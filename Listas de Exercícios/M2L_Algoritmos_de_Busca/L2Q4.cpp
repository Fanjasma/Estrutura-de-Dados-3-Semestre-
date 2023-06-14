// Faça um programa que cadastre 12 produtos. Para cada produto devem ser
// cadastrados os seguintes dados: código, descrição e preço. Use um método de
// ordenação e em seguida calcule e mostre quantas comparações devem ser feitas
// para encontrar um funcionário pelo código:
// a. Usando busca sequencial.
// b. Usando busca binária.

#include <iostream>
#include <string>

using namespace std;


#define MAX 10

struct Produto{
    string codigo;
    string descricao;
    string preco;
};

int pesquisaLR(int* vetor, int valor, int contador)
{
    if(contador > MAX)
        return -1;
    if(valor == vetor[contador])
        return contador;
    contador++;
    return pesquisaLR(vetor, valor, contador);
}

int pesquisaBR(int* vetor, int valor, int inicio, int fim) {
    if (inicio > fim) 
        return -1; 
    
    int meio = (inicio + fim) / 2;
    if (vetor[meio] == valor) 
    {
        return meio; 
    }
    else{
        if (vetor[meio] > valor) 
            return pesquisaBR(vetor, valor, inicio, meio - 1); 
        else 
            return pesquisaBR(vetor, valor, meio + 1, fim); 
    }
}

int binarySearch(int nums[], int low, int high, int target)
{
    // Base condition (search space is exhausted)
    if (low > high) {
        return -1;
    }
 
    // find the mid-value in the search space and
    // compares it with the target
 
    int mid = (low + high)/2;    // overflow can happen
    // int mid = low + (high - low)/2;
 
    // Base condition (target value is found)
    if (target == nums[mid]) {
        return mid;
    }
 
    // discard all elements in the right search space,
    // including the middle element
    else if (target < nums[mid]) {
        return binarySearch(nums, low, mid - 1, target);
    }
 
    // discard all elements in the left search space,
    // including the middle element
    else {
        return binarySearch(nums, mid + 1, high, target);
    }
}

void entradaDeDados(int* vetor, int* valorProcurado)
{
    for(int i = 0; i < MAX; i++)
    {
        cout << "Insira o codigo numero " << i+1 << " num vetor de tamanho " << MAX << ": ";
        cin >> vetor[i];
    }
    cout << "Insira um codigo a ser procurado no vetor inserido: ";
    cin >> *valorProcurado;
}

int main()
{
    int umVetor[MAX]={1,2,3,4,5,6,7,16,17,20}, valorProcurado;

    valorProcurado = 17;

    cout << endl << "Valor encontrado no indice " << binarySearch(umVetor, 0, MAX-1, valorProcurado);

    return 0;
}