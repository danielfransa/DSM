/*
10) Dado uma pilha que armazene números, escreva uma função que forneça o maior, o 
menor e a média aritmética dos elementos da pilha. Utilize somente as operações Push e Pop.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior=-999999, menor=999999, soma=0;
	elem comp;
	bool erro;
	Pilha Pilha1;
	
	cout << "Quantos elementos tem sua pilha? Max 20 elementos!" << endl;
	cin >> num;
	
	Create(&Pilha1);
	for(int i=0; i<num; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		if(comp > maior){
			maior = comp;
		}
		
		if(comp < menor){
			menor = comp;
		}
		
		soma += comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	cout << "Elementos da Pilha 1: " << endl;
	cout << "[";
	for(int i=0; i<num; i++){
		cout << Pilha1.itens[i] << ", ";
	}
	cout << "]" << endl;
	
	cout << "Maior elemento: " << maior << endl;
	cout << "Menor elemento: " << menor << endl;
	cout << "Média aritmética dos elemento: " << soma/num << endl;
	
	
	
	return 0;
}
