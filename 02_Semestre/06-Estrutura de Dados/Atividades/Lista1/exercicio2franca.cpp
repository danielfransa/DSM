/*
Os preços dos produtos de uma loja serão atualizados por conta da inflação que aumentou 15%. 
Crie um  programa  que  vai popular  o  vetor de  10  unidades  de doublee depois vai atualizar 
os preços de acordo com a inflação. Depois disso, exibir o valor na tela.
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
	
	// receber o preço dos 10 itens 	
	for(int i=0; i<10; i++){
		cout << "Informe o preço do " << i+1 << "º produto" << endl;
		cin >> preco[i];
	}
	cout << endl;
	
	// Atualizar preço
	for(int i=0; i<10; i++){
		precoAtualizado[i] = preco[i] * 1.15;
	}
	
	// Imprimir resultado
	for(int i=0; i<10; i++){
		cout << "Preço atual do " << i+1 << "º produto é: R$ " << preco[i] << endl;
		cout <<" - O preço atualizado é: R$ "<<precoAtualizado[i] << endl;
		cout << endl;
	}
	
}
