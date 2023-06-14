/*8. Crie um vetor que armazene dados de 15 casas numa imobili�ria. Dever�o ser
considerados os campos: c�digo, bairro, tamanho em m2
, valor de venda e valor de
aluguel. Elabore um programa que: preencha o vetor com os dados fornecidos pelo
usu�rio e ordene de forma decrescente os elementos pelo campo de venda, usando o
bubble sort.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


const int quant=4;

struct Casa{
	string codigo;
	string bairro;
	float metro_quadrado;
	float valor_venda;
	float valor_aluguel;
};

void cabecalho();
void entrada_de_dados(struct Casa *vCasa);
void imprime_vetor(struct Casa *vCasa);
void ordemDecrescente(Casa* casas);
int menu();
void bubble(struct Casa *vCasa);

int main(){
	struct Casa CASA[quant];
	int opcao;
	
	cabecalho();

	entrada_de_dados(CASA);

	cout << "Dado original: " << endl;
	imprime_vetor(CASA);


	do{
		opcao = menu();

		switch(opcao){
			case 1:
				cout << "Ordenando por valor de venda decrescente..." << endl;
				ordemDecrescente(CASA);
				cout << endl << "Dado ordenado: " << endl;
				imprime_vetor(CASA);
			break;

			default:
				cout << "Saindo..." << endl;
				cout<<"Obrigado pela preferencia! Duvidas? Acesse o site: www.imobiliaria.raiodesol.com"<<endl;
		}
	}while (opcao != 0);

	return 0;
}

void cabecalho(){
	cout<<" ___________________________________"<<endl;
	cout<<"|      IMOBILIARIA RAIO DE SOL      |"<<endl;
	cout<<"|___________________________________|"<<endl;
}

void entrada_de_dados(struct Casa *vCasa){

	int i;  
	struct Casa *paux = vCasa;

	for(i =0; i<=quant-1; i++)
	{
		cout << "Digite o codigo da casa" << i+1 <<":";
		fflush(stdout);
		cin >> paux->codigo;
		
		cout << "\tDigite o bairro da casa" << i+1 <<":";
		fflush(stdout);
		cin >> paux->bairro;

		cout << "\tDigite quantos metros quadrados a casa tem: ";
		cin >> paux->metro_quadrado;

		cout << "\tDigite o valor do aluguel da casa: ";
		cin >> paux->valor_aluguel;
		
		cout << "\tDigite o valor da venda da casa: ";
		cin >> paux->valor_venda;
		paux =paux + 1;
		
		cout<<endl;
		
		cin.ignore();
	}
}

void imprime_vetor(struct Casa *vCasa){

	int i;
	struct Casa *paux =vCasa;

	cout << "CODIGO\tBAIRRO\tMETROS QUADRADOS\tVALOR DO ALUGUEL\tVALOR DA CASA" << endl;

	for (i=0; i<quant; i++){

		cout << paux->codigo << "\t\t" << paux->bairro << "\t\t" << paux->metro_quadrado << "\t\t" << paux->valor_aluguel << "\t\t" << paux->valor_venda <<endl;
		paux= paux + 1;

	}
	cout << endl;
}

int menu(){
	int escolha;

	do{
		cout <<"1 - Ordenar pelo valor de venda..." << endl;
		cout <<"0 - Sair." << endl;

		cout << "Digite sua escolha: ";
		cin >> escolha;

		if(escolha < 0 || escolha >1)
			cout << "\tValor invalido!" << endl;
      }while(escolha <0 || escolha > 1);
		return escolha;

}

void bubble(struct Casa *vCasa){

	int troca;
	int i,n;
	string aux_codigo;
	string aux_bairro;
	float aux_metro_quadrado;
	float aux_valor_venda;
	float aux_valor_aluguel;

	n=1;
	troca=1;

	while (n <= quant && troca ==1)
	{
		troca = 0;

		for(i=0; i <=quant-2 ; i++){
			if(vCasa[i].valor_venda< vCasa[i+1].valor_venda){

				troca = 1;
				
				aux_codigo= vCasa[i].codigo;
				vCasa[i].codigo=vCasa[i+1].codigo;
				vCasa[i+1].codigo= aux_codigo;
				
				aux_bairro = vCasa[i].bairro;
				vCasa[i].bairro=vCasa[i+1].bairro;
				vCasa[i+1].bairro= aux_bairro;
				
				aux_metro_quadrado = vCasa[i].metro_quadrado;
				vCasa[i].metro_quadrado=vCasa[i+1].metro_quadrado;
				vCasa[i+1].metro_quadrado= aux_metro_quadrado;
				
				aux_valor_aluguel = vCasa[i].valor_aluguel;
				vCasa[i].valor_aluguel=vCasa[i+1].valor_aluguel;
				vCasa[i+1].valor_aluguel= aux_valor_aluguel;
				
				aux_valor_venda = vCasa[i].valor_venda;
				vCasa[i].valor_venda=vCasa[i+1].valor_venda;
				vCasa[i+1].valor_venda= aux_valor_venda;
				
			}
		}
		
		n = n+1;
	}

}

void ordemDecrescente(Casa* casas) //Bubble Sort v.2
{
    Casa aux;
    for(int i=0;i<quant;i++)
        for(int j=0;j<quant-1;j++)
            if(casas[j].valor_aluguel < casas[j+1].valor_aluguel)
            {
                aux = casas[j];
                casas[j] = casas[j+1]; 
                casas[j+1] = aux; 
            }
}