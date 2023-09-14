/*
Escreva um método para inverter a ordem dos elementos de uma fila de 10 elementos,
usando uma pilha como estrutura auxiliar. Exiba a fila invertida.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha3.h"
#include "fila3.h"


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	elemf comp;
	Fila Fila1;
	Pilha Pilha1;
	bool erro;
	
	Createf(&Fila1);
	Create(&Pilha1);
	
	for(int i=0; i<10; i++){
		cout << "Insira o " << i+1 << "º elemento: " << endl;
		cin >> comp;
		Enterf(&Fila1, &comp, &erro);
	}
	
	cout << endl;
	
	cout << "Exibindo os meus elementos que estão na fila" << endl;
	Printf(&Fila1);
	
	cout << endl;
	cout << endl;
	
	cout << "Invertendo a fila... " << endl;
	
	cout << endl;
	
	//Esvaziando Fila e populando Pilha
	for(int i=0; i<10; i++){
		comp = Outf(&Fila1, &erro);
		Push(&Pilha1, &comp, &erro);
		
	}
	
	// Esvaziando Pilha e populando Fila
	for(int i=0; i<10; i++){
		Pop(&Pilha1, &erro);
		Enterf(&Fila1, &X, &erro);
		
	}
	
	cout << "Exibindo os meus elementos invertidos na fila" << endl;
	Printf(&Fila1);
	
	
	return 0;
}
