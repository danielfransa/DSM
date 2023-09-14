/*
13. Desenvolva uma fun��opara testar se duas pilhas P1 e P2 s�o iguais
no tamanho e nos elementos que possuem.Pe�a para o usu�rio popular as pilhas. 
Utilize somente as opera��es Push e Pop.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

int cont1, cont2, aux=0, x;
elem comp;
bool erro;
Pilha Pilha1, Pilha2, Pilha3;


void contar(Pilha Pilha1, Pilha Pilha2){
	
	Create(&Pilha3);
	
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		Push(&Pilha3, &X, &erro);
		cont1++;		
	}
		
	while(Pilha3.topo>=0){
		Pop(&Pilha3, &erro);
		Push(&Pilha1, &X, &erro);
				
	}
	
	while(Pilha2.topo>=0){
		Pop(&Pilha2, &erro);
		Push(&Pilha3, &X, &erro);
		cont2++;		
	}
	
		while(Pilha3.topo>=0){
		Pop(&Pilha3, &erro);
		Push(&Pilha2, &X, &erro);
				
	}
	
	cout << endl;
	
	if(cont1 != cont2){
		cout << "As Pilhas n�o s�o iguais pois tem tamanhos diferentes" << endl;
	} else{
		for(int i = 0; i<cont1; i++ ){
			if(Pilha1.itens[i] != Pilha2.itens[i]){
				cout << "As pilhas tem os mesmos tamanhos mas s�o diferentes no item n�: " << i+1 << endl;
				aux++;
			}
		}
		if(aux == 0){
			cout << "As pilhas s�o exatamente iguais:" << endl;
		}
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
				cout <<"Op��o inixistente!" << endl;
				break;
		}
		
	}while(x != 3);
	
		
	return 0;
}
