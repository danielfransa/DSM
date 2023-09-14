/*
Escreva uma função que tenha nome e data de nascimento (dia, mês e ano). 
Portanto data é uma struct, então será struct data dentro de outra struct. 
Popule um vetor (através do usuário) que tenha 5 unidades dessa nova estrutura 
e busque a pessoa mais velha. Exiba o nome e a data de nascimento dessa pessoa 
mais velha.
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct DATA {

		int dia, mes, ano;

	};

struct nascimento{

	DATA data[5];
	string nome;

};


int main() {

	nascimento dataNascimento[5];

	string aux;
	int d, m, a;

	for(int i=0; i<5; i++){
		cout << "Nome: "  << endl;
		cin >> dataNascimento[i].nome;
		cout << "Data Nascimento: DD MM AAAA" << endl;
		cin >> dataNascimento[i].data[i].dia;
		cin >> dataNascimento[i].data[i].mes;
		cin >> dataNascimento[i].data[i].ano;
	}

	//Organiza por dia.
	for(int i=0; i<5-1; i++){
		for (int j=0; j<5-i-1; j++){
			if(dataNascimento[j].data[j].dia > dataNascimento[j+1].data[j+1].dia){
				//Muda a posição do nome conforme validação acima:
				aux = dataNascimento[j].nome;
				dataNascimento[j].nome = dataNascimento[j+1].nome;
				dataNascimento[j+1].nome = aux;
				//Muda a posição do dia
				d = dataNascimento[j].data[j].dia;
				dataNascimento[j].data[j].dia = dataNascimento[j+1].data[j+1].dia;
				dataNascimento[j+1].data[j+1].dia = d;
				//Muda a posição do mês
				m = dataNascimento[j].data[j].mes;
				dataNascimento[j].data[j].mes = dataNascimento[j+1].data[j+1].mes;
				dataNascimento[j+1].data[j+1].mes = m;
				//Muda a posição do ano
				a = dataNascimento[j].data[j].ano;
				dataNascimento[j].data[j].ano = dataNascimento[j+1].data[j+1].ano;
				dataNascimento[j+1].data[j+1].ano = a;

			}
		}
	}
	
	//Organiza por mes.
	for(int i=0; i<5-1; i++){
		for (int j=0; j<5-i-1; j++){
			if(dataNascimento[j].data[j].mes > dataNascimento[j+1].data[j+1].mes){
				//Muda a posição do nome conforme validação acima:
				aux = dataNascimento[j].nome;
				dataNascimento[j].nome = dataNascimento[j+1].nome;
				dataNascimento[j+1].nome = aux;
				//Muda a posição do dia
				d = dataNascimento[j].data[j].dia;
				dataNascimento[j].data[j].dia = dataNascimento[j+1].data[j+1].dia;
				dataNascimento[j+1].data[j+1].dia = d;
				//Muda a posição do mês
				m = dataNascimento[j].data[j].mes;
				dataNascimento[j].data[j].mes = dataNascimento[j+1].data[j+1].mes;
				dataNascimento[j+1].data[j+1].mes = m;
				//Muda a posição do ano
				a = dataNascimento[j].data[j].ano;
				dataNascimento[j].data[j].ano = dataNascimento[j+1].data[j+1].ano;
				dataNascimento[j+1].data[j+1].ano = a;

			}
		}
	}

	//Organiza por ano.
	for(int i=0; i<5-1; i++){
		for (int j=0; j<5-i-1; j++){
			if(dataNascimento[j].data[j].ano > dataNascimento[j+1].data[j+1].ano){
				//Muda a posição do nome conforme validação acima:
				aux = dataNascimento[j].nome;
				dataNascimento[j].nome = dataNascimento[j+1].nome;
				dataNascimento[j+1].nome = aux;
				//Muda a posição do dia
				d = dataNascimento[j].data[j].dia;
				dataNascimento[j].data[j].dia = dataNascimento[j+1].data[j+1].dia;
				dataNascimento[j+1].data[j+1].dia = d;
				//Muda a posição do mês
				m = dataNascimento[j].data[j].mes;
				dataNascimento[j].data[j].mes = dataNascimento[j+1].data[j+1].mes;
				dataNascimento[j+1].data[j+1].mes = m;
				//Muda a posição do ano
				a = dataNascimento[j].data[j].ano;
				dataNascimento[j].data[j].ano = dataNascimento[j+1].data[j+1].ano;
				dataNascimento[j+1].data[j+1].ano = a;

			}
		}
	}

//	for(int i=0; i<5; i++){
//		cout << "Nome: "  << dataNascimento[i].nome << endl;
//		cout << "Data Nascimento (DD MM AAAA): " << dataNascimento[i].data[i].dia << "/" << dataNascimento[i].data[i].mes << "/" << dataNascimento[i].data[i].ano << endl;
//	}
	
	cout << "Nome: "  << dataNascimento[0].nome << endl;
	cout << "Data Nascimento (DD MM AAAA): " << dataNascimento[0].data[0].dia << "/" << dataNascimento[0].data[0].mes << "/" << dataNascimento[0].data[0].ano << endl;
	
	return 0;
}
