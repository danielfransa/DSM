/*
Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar 
os valores de seus produtos no seu cat�logo de vendas. O presidente ordenou um aumento de 4.78% 
para todos os itens. S�o 10 itens no cat�logo. Sua tarefa � elaborar um programa que leia o nome
e valor atual dos produtos (dados pelo usu�rio) e armazene em um vetor de struct, e ap�s isso efetue 
o reajuste do valor dos produtos armazenando os em outro vetor, preservando o vetor original. 
O reajuste (acesso ao vetor) dever� ser feito utilizando ponteiros. 
Imprima na tela o valor reajustado, usando tamb�m ponteiros.
*/    
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
using namespace std;

struct PRODUTOS {
	string nome;
	double *valor;
};


int main() {
setlocale(LC_ALL, "Portuguese");

	PRODUTOS produtos[10];
	double valorAtual[10], valorReajustado[10];
	
	
	for(int i=0; i<10; i++){
		produtos[i].valor = &valorAtual[i];
		
		cout << "Entre com o nome do " << i+1 << "� produto: " << endl;
		cin >> produtos[i].nome;
		
		cout << "Entre com o valor do " << i+1 << "� produto: " << endl;
		cin >> *(produtos[i].valor);
		
	}

	for(int i=0; i<10; i++){
		valorReajustado[i] = (*(produtos[i].valor)*0.0478)+ *(produtos[i].valor);	
	}

	cout << endl;
	for(int i=0; i<10; i++){
		produtos[i].valor = &valorReajustado[i];
		
		cout << "Nome do " << i+1 << "� produto: " << produtos[i].nome << endl;
		
		cout << "Valor reajustado do " << i+1 << "� produto: " << *(produtos[i].valor) << endl;
		
		cout << "------------------------------------------------" << endl;
		
	}

	return 0;
}
