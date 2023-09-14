#include <iostream>
#include <cstdlib>
#include <locale>
#include "fila.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int aux;
	elem elemento;
	Fila Fila1;
	bool erro;
	
	Create(&Fila1);
	
	do{
		cout << endl;
		cout << "--------Menu--------" << endl;
		cout << "1- Inserir item na fila: " << endl;
		cout << "2- Retirar item da Fila: " << endl;
		cout << "3- Exibir fila: " << endl;
		cout << "4- Sair do Programa: " << endl;
		cin >> aux;
		
		
		switch(aux){
			case 1:
				cout << "Insira um Elemento " << endl;
				cin >> elemento;
				Enter(&Fila1, &elemento, &erro);
				break;
			case 2:
				elemento = Out(&Fila1, &erro);
				break;
			case 3:
				cout << endl << "Os elementos da fila são: " << endl;
				Print(&Fila1);
				break;
			case 4:
				break;
			default:
				cout << endl << "Opção inválida escolha um dos indices do menu: " << endl;
			
		}
		
	}while(aux != 4);
	
	return 0;
}
