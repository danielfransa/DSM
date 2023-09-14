/*
Os pre�os dos produtos de uma loja ser�o atualizados por conta da infla��o que aumentou 15%. 
Crie um  programa  que  vai popular  o  vetor de  10  unidades  de doublee depois vai atualizar 
os pre�os de acordo com a infla��o. Depois disso, exibir o valor na tela.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include<iomanip>
using namespace std;



main() {
	setlocale(LC_ALL, "Portuguese");
	std::cout << std::fixed << std::setprecision(2);  // para arredondar resultado com 2 casas decimais
	
	double preco[10];
	double precoAtualizado[10];
	
	// receber o pre�o dos 10 itens 	
	for(int i=0; i<10; i++){
		cout << "Informe o pre�o do " << i+1 << "� produto" << endl;
		cin >> preco[i];
	}
	cout << endl;
	
	// Atualizar pre�o
	for(int i=0; i<10; i++){
		precoAtualizado[i] = preco[i] * 1.15;
	}
	
	// Imprimir resultado
	for(int i=0; i<10; i++){
		cout << "Pre�o atual do " << i+1 << "� produto �: R$ " << preco[i] << endl;
		cout <<" - O pre�o atualizado �: R$ "<<precoAtualizado[i] << endl;
		cout << endl;
	}
	
}
