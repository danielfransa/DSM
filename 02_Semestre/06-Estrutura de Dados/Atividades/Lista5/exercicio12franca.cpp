/*
12. Desenvolva uma fun??opara testar se uma pilha P1 tem mais elementos que uma pilhaP2.
Utilize somente as opera??es Push e Pop.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

int cont1, cont2, x;
elem comp;
bool erro;
Pilha Pilha1, Pilha2;


void contar(Pilha Pilha1, Pilha Pilha2){
	
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		cont1++;		
	}
	
	while(Pilha2.topo>=0){
		Pop(&Pilha2, &erro);
		cont2++;		
	}
	
	cout << endl;
	
	if(cont1>cont2){
		cout << "A Pilha1 é maior que a Pilha2" << endl;
	} else{
		cout << "A Pilha2 é maior que a Pilha1" << endl;
	}
}



int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Create(&Pilha1);
	Create(&Pilha2);
	
	
	
	do{
		cout << "----- Menu -----" << endl;
		cout << "1- Popular Pilha1" << endl;
		cout << "2- Popular Pilha2" << endl;
		cout << "3- Contar as Pilhas e Encerrar" << endl;
		cin >> x;
		
		switch(x){
			case 1:
				cout << "Insira um valor!" << endl;
				cin >> comp;
				Push(&Pilha1, &comp, &erro);
				break;
			case 2:
				cout << "Insira um valor!" << endl;
				cin >> comp;
				Push(&Pilha2, &comp, &erro); 
				break;
			case 3:
				contar(Pilha1, Pilha2);
				break;
			default:
				cout <<"Op??o inixistente!" << endl;
				break;
		}
		
	}while(x != 3);
	
		
	return 0;
}
