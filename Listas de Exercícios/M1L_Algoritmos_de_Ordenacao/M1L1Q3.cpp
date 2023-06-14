// Faça um programa que cadastre 8 alunos. Para cada aluno devem ser cadastrados:
// nome, nota1 e nota2. Primeiro, liste todos os alunos cadastrados, ordenando-os pela
// média ponderada das notas, tendo a primeira nota peso 2 e a segunda, peso 3. Em
// seguida, ordene os alunos, de forma crescente, pela nota1, e liste-os. Finalmente,
// considerando que, para ser aprovado, o aluno deve ter no mínimo média 7, liste, em
// ordem alfabética, os alunos reprovados. Em cada ordenação use um algoritmo
// diferente.
#include <iostream>
#include <string>

using namespace std;

#define TAM 8
#define PESO1 2
#define PESO2 3
#define NOTA_MIN 7.0f

struct Aluno{
    string nome;
    float nota1;
    float nota2;
    float media;
};

void mediaPonderada(Aluno* alunos);
void nota1OrdemCrescente(Aluno* alunos);
void reprovadosOrdemAlfabetica(Aluno *alunos);

int main()
{
    Aluno alunos[TAM];

    alunos[0].nome = "Jonas";
    alunos[1].nome = "Pedro";
    alunos[2].nome = "Suelen";
    alunos[3].nome = "Ronaldo";
    alunos[4].nome = "Felipe";
    alunos[5].nome = "Lucio";
    alunos[6].nome = "Jose";
    alunos[7].nome = "Murilo";
    
    alunos[1].nota1 = 7;
    alunos[2].nota1 = 8;
    alunos[3].nota1 = 9;
    alunos[4].nota1 = 5;
    alunos[5].nota1 = 10;
    alunos[6].nota1 = 3;
    alunos[7].nota1 = 2;
    

    for(int i=0;i<TAM;i++)
    {
        alunos[i].nota2 = 10;
    }

    mediaPonderada(alunos);
    reprovadosOrdemAlfabetica(alunos);
}

void mediaPonderada(Aluno* alunos)
{
    float aux;
    Aluno* vetorAux[TAM];

    for(int i=0;i<TAM;i++)
        alunos[i].media = ((alunos[i].nota1*PESO1 + alunos[i].nota2*PESO2)/(PESO1+PESO2));

    //Bubble Sort v0
    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM-1;j++)
            if(alunos[j].media>alunos[j+1].media)
            {
                aux = alunos[j].media;
                alunos[j].media = alunos[j+1].media;
                alunos[j+1].media = aux;
            }

    //Imprime media em ordem crescente
    for(int i=0;i<TAM;i++)
        cout << "Media do aluno " << i+1 <<": " << alunos[i].media << endl;
}

void nota1OrdemCrescente(Aluno* alunos)
{
    float aux;

    //Bubble Sort v1
    for(int i=TAM-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(alunos[j].nota1>alunos[j+1].nota1)
            {
                aux = alunos[j].nota1;
                alunos[j].nota1 = alunos[j+1].nota1;
                alunos[j+1].nota1 = aux;
            }
            
    //Imprime primeira nota em ordem crescente
    for(int i=0;i<TAM;i++)
        cout << "Primeira nota do aluno " << i+1 <<": " << alunos[i].nota1 << endl;
}

void reprovadosOrdemAlfabetica(Aluno *alunos)
{
    string aux;
    int troca=1;
    int reprovados=TAM;


    for(int i=TAM; i>0; i--)
        if(alunos[i].media<NOTA_MIN)
        {
            reprovados = i;
            break;
        }

    //Bubble Sort v2
    for(int i=0;i<reprovados && troca==1;i++)
    {
        troca=0;
        for(int j=0;j<reprovados-1;j++)
        {
            if(alunos[j].nome>alunos[j+1].nome)
            {
                troca=1;
                aux = alunos[j].nome;
                alunos[j].nome = alunos[j+1].nome;
                alunos[j+1].nome = aux;
            }
        }
    }

    for(int i=0;i<reprovados-1;i++)
    {
        cout << "Alunos reprovados: " << i+1 <<": " << alunos[i].nome;
        cout << " [ MEDIA: " << alunos[i].media << " ]" << endl;
    }
}
