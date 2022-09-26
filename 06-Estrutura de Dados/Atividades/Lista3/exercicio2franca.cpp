/*
Seja a seguinte struct que � utilizada para descrever os produtos que est�o no estoque de uma loja 
:struct Produto {
char nome[30];       -> Nome do produto 
int *codigo;         -> Codigo do produto
double  *preco;      -> Preco do produto
char fornecedor[50]  -> Fornecedor do produto
};
Fa�a um programa que armazene 5 produtos e exiba-os na tela. 
Obs: fique atento, porque c�digo e pre�o s�o ponteiros dentro de struct
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
		
		cout << "Cadastre o nome do " << i+1 << "� produto. " << endl;
		cin >> produto[i].nome;	

		cout << "Cadastre o c�digo do " << i+1 << "� produto. " << endl;
		cin >> *(produto[i].codigo);
		
		cout << "Cadastre o pre�o do " << i+1 << "� produto. " << endl;
		cin >> *(produto[i].preco);
		
		cout << "Cadastre o fornecedor do " << i+1 << "� produto. " << endl;
		cin >> produto[i].fornecedor;		
	}
	
		for(int i=0; i<5; i++){
		cout << endl;
				
		cout << "Nome: " << produto[i].nome << endl;
		cout << "C�digo: " << *(produto[i].codigo) << endl;
		cout << "Pre�o: " << *(produto[i].preco) << endl;
		cout << "Fornecedor: " << produto[i].fornecedor << endl;
		cout << "----------------------------------------" << endl;
	}
	
	
	
	
	return 0;
}
