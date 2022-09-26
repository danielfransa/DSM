/*
Faça um programa que leia um vetor de inteiros do usuário, remova valores consecutivos repetidos e
mostra o vetor atualizado. O programa deve alocar memória para o vetor inicial e usar a função realloc
para ajustar o tamanho do vetor. O tamanho do vetor deve ser sempre o mínimo necessário para
armazenar os valores, ou seja, usar malloc de 1 em 1. O programa deve mostrar o tamanho final do vetor,
como no exemplo abaixo.

{0,0,1,1,1,2,2,3,0,3}  ---> {0,1,2,3,0,3}

*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <vector>

using namespace std;

int main() {
	
	int tam, aux;
	vector <int> vetor;

	cout << "Qual o tamanho da matrix: " << endl;
		cin >> tam;
		
	for(int i=0; i<tam; i++){
		cout << "Insira o valor do " << i+1 << "º item do vetor." <<endl;
		cin >> aux;
		vetor.push_back(aux);
	}
	
	cout << "Vetor antes de corrigir:" << endl;
	for(int i=0; i<tam; i++){
		cout << vetor[i] << " - ";	
	}
	cout << endl;
	
	for(int i=0; i<vetor.size()-1; i++){
		if(vetor[i] == vetor[i+1]){
			vetor.erase(vetor.begin()+i);
			i = -1;
		}		
	}
	
	cout << "tamanho vetor: " << vetor.size() << endl;

	cout << "Vetor depois de corrigir:" << endl;
	for(int i=0; i<vetor.size(); i++){
		cout << vetor[i] << " - ";	
	}
	
	
	return 0;
}
