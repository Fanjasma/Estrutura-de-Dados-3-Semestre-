// Crie um vetor que armazene dados de 15 casas numa imobiliária. Deverão ser
// considerados os campos: código, bairro, tamanho em m2, valor de venda e valor de
// aluguel. Elabore um programa que: preencha o vetor com os dados fornecidos pelo
// usuário e ordene de forma decrescente os elementos pelo campo de venda, usando o
// bubble sort.

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;


#define TAM 4
#define CADASTRAR 1
#define MOSTRAR 2
#define ORDENAR 3
#define SAIR 0


struct Casa{
    string codigo, bairro;
    float metrosQuadrados, valorDeVenda, valorDeAluguel;
};

void cabecalho()
{
    cout << "+-------------------------------------+"<<endl;
    cout << "|     < IMOBILIARIA RAIO DE SOL >     |"<<endl;
    cout << "+-------------------------------------+"<<endl;
    cout << endl;
}

int menu()
{
    int escolha;
    do{
        cabecalho();
        
        cout << "[1] CADASTRAR CASAS...................." << endl;
        cout << "[2] MOSTRAR CASAS......................" << endl;
        cout << "[3] ORDENAR CASAS......................" << endl;
        cout << "[0] SAIR..............................." << endl;
        cout << endl;

        cout << "[?] Insira a opcao desejada: ";
        cin >> escolha;

        if(escolha < CADASTRAR || escolha > SAIR)
        {
            system("cls");
            cout << endl;
            cout << "[!] Insira um valor valido.            " << endl;
            cout << endl;
        }
    }while(escolha < SAIR || escolha > ORDENAR);

    cout << endl;
    return escolha;
}

void cadastraCasa(vector<Casa> &casas)
{
    Casa umaCasa;
    int i=0, escolha;

    do{
        cout << "Digite o codigo da casa................[" << i+1 <<"]: ";
        cin >> umaCasa.codigo;
        
        cout << "Digite o bairro da casa................[" << i+1 <<"]: ";
        cin.ignore();
        getline(cin, umaCasa.bairro);
        
        cout << "Digite o tamanho da casa(m2)...........[" << i+1 <<"]: ";
        cin >> umaCasa.metrosQuadrados;

        cout << "Digite o valor de venda da casa(R$)....[" << i+1 <<"]: ";
        cin >> umaCasa.valorDeVenda;

        cout << "Digite o valor de aluguel da casa......[" << i+1 <<"]: ";
        cin >> umaCasa.valorDeAluguel;

        casas.push_back(umaCasa);

        cout << "-------------------------------------------" << endl;
        cout << "Digite '1' para continuar ou '0' para sair: ";
        cin >> escolha;
        cout << "-------------------------------------------" << endl;
        
        i++;
    }while(escolha != SAIR);

    system("cls");

    cout << endl;
    cout << "[!] Cadastro de casas concluido.       " << endl;
    cout << endl;
}

void ordenaCasas(vector<Casa> &casas) //Bubble Sort v.2 (decrescente)
{
    Casa aux;
    int troca=1;

    for(int i = 0; i < (int)casas.size() && troca==1; i++)
    {
        troca=0;
        for(int j = 0; j < (int)casas.size()-1; j++)
            if(casas[j].valorDeVenda < casas[j+1].valorDeVenda)
            {
                troca=1;
                swap(casas[j],casas[j+1]);
            }
    }

    cout << endl;
    cout << "[!] Casas ordenadas em ordem decrescente de valor de venda." << endl;
    cout << endl;
}

void mostraCasas(vector<Casa> &casas)
{
    cout << endl;
    cout << "-------------------------------------------" << endl;
    for(auto &casa : casas)
    {
        cout << "CASA <" << casa.codigo << ">" << endl;
        cout << "\tBairro:.....................: " << casa.bairro << endl;
        cout << "\tTamanho.....................: " << casa.metrosQuadrados << "m2" << endl;
        cout << "\tValor de venda..............: R$" << casa.valorDeVenda << endl;
        cout << "\tValor de aluguel da casa....: R$" << casa.valorDeAluguel << endl;
        cout << endl;
    }
    cout << "-------------------------------------------" << endl;
    cout << "[!] Pressione qualquer tecla para voltar ao menu..." << endl;

    cin.ignore();
    getchar();

    system("cls");
}

int main()
{
    vector<Casa> casas;
    Casa umaCasa;
    int escolha;
    
    do{
        escolha = menu();
        system("cls");

        switch(escolha)
        {
        case CADASTRAR:
            cadastraCasa(casas);
            break;

        case ORDENAR:
            if(casas.size() == 0)
            {
                cout << endl;
                cout << "[!] Ainda nao ha casas cadastradas." << endl;
                cout << endl;
                break;
            }
            ordenaCasas(casas);
            break;

        case MOSTRAR:
            if(casas.size() == 0)
            {
                cout << endl;
                cout << "[!] Ainda nao ha casas cadastradas.    " << endl;
                cout << endl;
                break;
            }
            mostraCasas(casas);
            break;

        case SAIR:
            break;
        }
    }while(escolha != SAIR);
}