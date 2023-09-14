/*
Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja 
:struct Produto {
char nome[30];       -> Nome do produto 
int *codigo;         -> Codigo do produto
double  *preco;      -> Preco do produto
char fornecedor[50]  -> Fornecedor do produto
};
Faça um programa que armazene 5 produtos e exiba-os na tela. 
Obs: fique atento, porque código e preço são ponteiros dentro de struct
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

struct PRODUTO {
char nome[30];        
int *codigo;         
double  *preco;      
char fornecedor[50];  
};

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	PRODUTO produto[5];
	int cod[5];
	double prec[5];
	
	for(int i=0; i<5; i++){
		produto[i].codigo = &cod[i];
		produto[i].preco = &prec[i];
		
		cout << "Cadastre o nome do " << i+1 << "º produto. " << endl;
		cin >> produto[i].nome;	

		cout << "Cadastre o código do " << i+1 << "º produto. " << endl;
		cin >> *(produto[i].codigo);
		
		cout << "Cadastre o preço do " << i+1 << "º produto. " << endl;
		cin >> *(produto[i].preco);
		
		cout << "Cadastre o fornecedor do " << i+1 << "º produto. " << endl;
		cin >> produto[i].fornecedor;		
	}
	
		for(int i=0; i<5; i++){
		cout << endl;
				
		cout << "Nome: " << produto[i].nome << endl;
		cout << "Código: " << *(produto[i].codigo) << endl;
		cout << "Preço: " << *(produto[i].preco) << endl;
		cout << "Fornecedor: " << produto[i].fornecedor << endl;
		cout << "----------------------------------------" << endl;
	}
	
	
	
	
	return 0;
}
