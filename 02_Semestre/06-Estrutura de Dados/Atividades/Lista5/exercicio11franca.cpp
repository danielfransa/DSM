/*
11. Desenvolva uma funçãopara inverter a posiçãodos elementos de uma pilha P. 
Utilize somente as operações Push e Pop.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

int num;
elem comp;
bool erro;
Pilha Pilha1, Pilha2;


void inverter(Pilha Pilha1){
	
	Create(&Pilha2);
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		Push(&Pilha2, &X, &erro);
		
	}
	
	cout << "Elementos da Pilha invertidos (Pilha invertida em uma função): " << endl;
	cout << "[";
	for(int i=0; i<num; i++){
		cout << Pilha2.itens[i]  << ", ";
	}
	cout << "]" << endl;
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	

	
	cout << "Quantos elementos tem sua pilha? Max 20 elementos!" << endl;
	cin >> num;
	
	Create(&Pilha1);
	for(int i=0; i<num; i++){
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	cout << "Elementos da Pilha antes de inventer: " << endl;
	cout << "[";
	for(int i=0; i<num; i++){
		cout << Pilha1.itens[i] << ", ";
	}
	cout << "]" << endl;
	
	/*
	cout << "Elementos da Pilha invertidos (gambiarra): " << endl;
	cout << "[";
	for(int i=num; i>0; i--){
		cout << Pilha1.itens[i-1] << ", ";
	}
	cout << "]" << endl;
	*/
	
	inverter(Pilha1);

	

	
	return 0;
}
