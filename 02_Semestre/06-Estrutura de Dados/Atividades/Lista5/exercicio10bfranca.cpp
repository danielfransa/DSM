/*
10) Dado uma pilha que armazene números, escreva uma função que forneça o maior, o 
menor e a média aritmética dos elementos da pilha. Utilize somente as operações Push e Pop.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;
int num, maior1=-9999, menor1=9999, soma1=0, op;
elem comp;
bool erro;
Pilha Pilha1;

void maior(Pilha Pilha1);
void menor(Pilha Pilha1);
int media(Pilha Pilha1, int num);

void maior(Pilha Pilha1){
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		if( X > maior1){
			maior1 = X;
		}
	}
	cout << "Maior: " << maior1 << endl;
}
void menor(Pilha Pilha1){
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		if( X < menor1){
			menor1 = X;
		}
	}
	cout << "Menor: " << menor1 << endl;
}

int media(Pilha Pilha1, int num){
	while(Pilha1.topo>=0){
		Pop(&Pilha1, &erro);
		soma1 += X;
	}

	return soma1 / num;

}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Quantos elementos tem sua pilha? Max 20 elementos!" << endl;
	cin >> num;
	
	Create(&Pilha1);
	for(int i=0; i<num; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	do{
		cout << "----- Menu -----" << endl;
		cout << "1 - Maior" << endl;
		cout << "2 - Menor" << endl;
		cout << "3 - Média Aritimética" << endl;
		cout << "4 - Sair" << endl;
		cin >> op;
		
		switch(op){
			case 1:
				maior(Pilha1);
				break;
			case 2:
				menor(Pilha1);
				break;
			case 3:
				cout << "Média Aritmética: " << media(Pilha1, num) << endl;
				break;
			case 4:
				break;
			default:
				cout << "Opção inválida!" << endl;
		}
	}while(op!=4);
		
	
	
	return 0;
}
