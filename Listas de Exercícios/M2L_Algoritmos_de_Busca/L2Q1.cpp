// Implemente um programa estruturado e recursivo para pesquisa linear. Faça uma
// função de busca chamada pesquisaLR que receba como parâmetro o valor a ser
// encontrado e a referência do vetor onde a busca será efetuada. A função retornará -1,
// caso não encontre o item, ou retornará o índice, caso o encontre.

#include <iostream>
#include <vector>

using namespace std;

#define MAX 10

int pesquisaLR(const vector<int> &umVetor, const int valor, int contador)
{
    if(contador > MAX)
        return -1;
    if(valor == umVetor[contador])
        return contador;
    contador++;
    return pesquisaLR(umVetor, valor, contador);
}


void entradaDeDados(vector<int> &umVetor, int* valorProcurado)
{
    int entrada;

    do{
        cout << "Insira um numero: ";
        cin >> entrada;

        umVetor.push_back(entrada);

        cout << "   Digite '0' para sair ou '1' para continuar: ";
        cin >> entrada;

    }while(entrada != 0);

    cout << "Insira um valor a ser procurado no vetor inserido: ";
    cin >> *valorProcurado;
}



int main()
{
    vector<int> umVetor;
    int valorProcurado;

    entradaDeDados(umVetor, &valorProcurado);
    cout << endl << "RESULTADO: " << pesquisaLR(umVetor, valorProcurado, 0);
    return 0;
}