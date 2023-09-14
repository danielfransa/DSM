/*
A delegação francesa de Futsal deseja criar um programa que deva contero nome do atleta, 
sua posição, idade e altura. Crie uma estrutura representando um atleta. Escreva um programa 
que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o 
mais novo.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;


struct atletas{
	string nome; 
	string posicao;
	int idade;
	float altura;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	atletas atleta[5];
	
	string aux, aux2;
	int aux3;
	float aux4;
	
	
	//Recebe os nomes
	for(int i=0; i<5; i++){	
		cout << "Digite o nome do " << i+1 << "º atleta" <<endl;
		cin >> atleta[i].nome;
		//atleta[i].posicao;
		//atleta[i].idade;
		//atleta[i].altura;	
	}
	
	//Recebe a Posição
	for(int i=0; i<5; i++){	
		cout << "Digite a posição do " << i+1 << "º atleta" <<endl;
		cin >> atleta[i].posicao;
	}
	
	//Recebe a Idade
	for(int i=0; i<5; i++){	
		cout << "Digite a idade do " << i+1 << "º atleta" <<endl;
		cin >> atleta[i].idade;
	}
	
	//Recebe a Altura
	for(int i=0; i<5; i++){	
		cout << "Digite a altura do " << i+1 << "º atleta" <<endl;
		cin >> atleta[i].altura;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	for(int i=0; i<5-1; i++){
		for(int j=0; j<5-i-1; j++){
			if(atleta[j].idade < atleta[j+1].idade){
				// troca o nome de posição caso teste seja verdadeiro.
				aux = atleta[j].nome;
				atleta[j].nome = atleta[j+1].nome;
				atleta[j+1].nome = aux;
				// troca a posi??o de posição caso teste seja verdadeiro.
				aux2 = atleta[j].posicao;
				atleta[j].posicao = atleta[j+1].posicao;
				atleta[j+1].posicao	= aux2;
				// troca a Idade de posição caso teste seja verdadeiro.
				aux3= atleta[j].idade;
				atleta[j].idade = atleta[j+1].idade;
				atleta[j+1].idade	= aux3;
				// troca a Altura de posição caso teste seja verdadeiro.
				aux4 = atleta[j].altura;
				atleta[j].altura = atleta[j+1].altura;
				atleta[j+1].altura = aux4;
			}
		}

	}
	
	for(int i=0; i<5; i++){	
		cout << "Nome: "<< atleta[i].nome << endl;
		cout << "Posição: " << atleta[i].posicao << endl;
		cout << "Idade: " << atleta[i].idade << endl;
		cout << "Altura: " << atleta[i].altura << endl;
		cout << "------------------------------------" << endl;
	}	
	return 0;
}

