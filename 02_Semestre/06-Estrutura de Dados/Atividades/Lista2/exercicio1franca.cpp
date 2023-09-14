/*
Considere uma estrutura de conta corrente contendo o nome do titular, 
o CPF e o valor na conta. Escreva uma função que cadastre 5 usuários 
e os exiba na tela ordenados de forma decrescente de acordo com o 
valor na conta.
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct contaCorente {
	string nome;
	string cpf;
	float saldo;

};

int main() {
	setlocale(LC_ALL, "Portuguese");

	contaCorente cadastro[5];

	string aux, aux2;
	float aux3;

	cadastro[0].nome = "Mario";
	cadastro[0].cpf =  "333.445.323-17";
	cadastro[0].saldo = 100.24;

	cadastro[1].nome = "Mauricio";
	cadastro[1].cpf = "212.345.987-76";
	cadastro[1].saldo = 201.98;

	cadastro[2].nome = "José";
	cadastro[2].cpf = "232.345.654-98";
	cadastro[2].saldo = 392.87;

	cadastro[3].nome = "Afranio";
	cadastro[3].cpf = "123.456.789-00";
	cadastro[3].saldo = 100.99;

	cadastro[4].nome = "Daniel";
	cadastro[4].cpf = "244.987.495-22";
	cadastro[4].saldo = 101.99;

		cout << "Cadastro antes  de oraganizar" << endl;
	for(int i=0; i<5; i++){
		cout << "Nome: "  << cadastro[i].nome << endl;
		cout << "CPF: " << cadastro[i].cpf << endl;
		cout << "Saldo: " << cadastro[i].saldo << endl;
	}


	for(int i=0; i<5-1; i++){
		for(int j=0; j<5-i-1; j++){
			if(cadastro[j].saldo < cadastro[j+1].saldo){
				// troca o nome de posição caso teste seja verdadeiro.
				aux = cadastro[j].nome;
				cadastro[j].nome = cadastro[j+1].nome;
				cadastro[j+1].nome	= aux;
				// troca o CPF de posição caso teste seja verdadeiro.
				aux2 = cadastro[j].cpf;
				cadastro[j].cpf = cadastro[j+1].cpf;
				cadastro[j+1].cpf	= aux2;
				// troca o Saldo de posição caso teste seja verdadeiro.
				aux3= cadastro[j].saldo;
				cadastro[j].saldo = cadastro[j+1].saldo;
				cadastro[j+1].saldo	= aux3;



			}
		}

	}

	cout <<"______________________________________________________________" << endl;
	cout << "Cadastro depois de oraganizado" << endl;
	for(int i=0; i<5; i++){
		cout << "Nome: "  << cadastro[i].nome << endl;
		cout << "CPF: " << cadastro[i].cpf << endl;
		cout << "Saldo: " << cadastro[i].saldo << endl;
	}

}
