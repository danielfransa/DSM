/*
Faça um programa de estoque de loja:
a) Crie uma struct PRODUTO que possua um CODIGO(inteiro), uma NOME(char) e um PRECO (real).
	Ao criar esse novo tipo, crie variáveis ponteiros para essa estrutura.
b) Usando alocação de memória, crie um vetor de 5 elementos, porém criando 1 por 1 dos elementos
do vetor. Faça o cadastro de 5 produtos.
c) Ordene os produtos de acordo com o preço do produto. Ordene de forma decrescente.
d) Imprima a média do valor dos preço dos produtos.
e) Imprima todos os produtos.

*/
#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>
using namespace std;

struct PRODUTO{
	int *codigo;
	char* nome;
	double *preco;
};



int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	PRODUTO *p1=NULL;
	int tam = 5, aux;
	string descricao;
	char* aux2;
	double aux3, soma=0;
		
	//malloc
	p1 = (PRODUTO*)malloc(tam * sizeof(PRODUTO));

	//Cadastro dos produtos
	for(int i=0; i<tam; i++){
		
		p1[i].codigo = (int*)malloc(1*sizeof(int));
		cout << "Informe o código do "<< i+1 << "º produto" << endl;
		cin >> *(p1[i].codigo);
		
		cout << "Informe a descriçao do "<< i+1 << "º produto " << endl;
		cin >> descricao; 								// recebe com string porque com char estava dando erro
		aux = descricao.length();
	//	cout << aux;
		p1[i].nome = (char*)malloc(aux+1*sizeof(char));
		strcpy(p1[i].nome, descricao.c_str());
	
		p1[i].preco = (double*)malloc(1*sizeof(double));
		cout << "Informe o preço do "<< i+1 << "º produto" << endl;
		cin >> *(p1[i].preco);	
	}
	
		for(int i=0; i<tam-1; i++){
		for(int j=0; j<tam-i-1; j++){
			if( *(p1[j].preco) < *(p1[j+1].preco)){
				// troca o código de posição caso teste seja verdadeiro.
				aux = *(p1[j].codigo);
				*(p1[j].codigo) = *(p1[j+1].codigo);
				*(p1[j+1].codigo)	= aux;
				// troca o nome de posicão caso teste seja verdadeiro.
				aux2 = (p1[j].nome);
				(p1[j].nome) = (p1[j+1].nome);
				(p1[j+1].nome)	= aux2;
				// troca o Saldo de posi??o caso teste seja verdadeiro.
				aux3= *(p1[j].preco);
				*(p1[j].preco) = *(p1[j+1].preco);
				*(p1[j+1].preco) = aux3;
			}
		}

	}
	
	for(int i = 0; i<tam; i++){
		soma += *(p1[i].preco);
		
	}
	
	cout << "A média dos valores dos produtos cadastrados é: R$ " << soma/tam << endl;
	
	//Imprimindo todos os produtos	
	cout << "Os produtos cadastrados são: " << endl;
	for(int i=0; i<tam; i++){
		cout << endl;
		cout << "Código: "  << *p1[i].codigo << endl;
		cout << "Nome: ";
		for(int j=0; j<=sizeof p1[i].nome; j++){
			cout << p1[i].nome[j];
		}
		cout << endl;
		cout << "Preço: " << *p1[i].preco << endl;
		cout << "--------------------------------------------" << endl;
	}
	

	
	
	
	
	
	return 0;
}
