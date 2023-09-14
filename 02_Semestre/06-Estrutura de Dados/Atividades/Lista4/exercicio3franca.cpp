/*
Fa�a um programa de estoque de loja:
a) Crie uma struct PRODUTO que possua um CODIGO(inteiro), uma NOME(char) e um PRECO (real).
	Ao criar esse novo tipo, crie vari�veis ponteiros para essa estrutura.
b) Usando aloca��o de mem�ria, crie um vetor de 5 elementos, por�m criando 1 por 1 dos elementos
do vetor. Fa�a o cadastro de 5 produtos.
c) Ordene os produtos de acordo com o pre�o do produto. Ordene de forma decrescente.
d) Imprima a m�dia do valor dos pre�o dos produtos.
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
		cout << "Informe o c�digo do "<< i+1 << "� produto" << endl;
		cin >> *(p1[i].codigo);
		
		cout << "Informe a descri�ao do "<< i+1 << "� produto " << endl;
		cin >> descricao; 								// recebe com string porque com char estava dando erro
		aux = descricao.length();
	//	cout << aux;
		p1[i].nome = (char*)malloc(aux+1*sizeof(char));
		strcpy(p1[i].nome, descricao.c_str());
	
		p1[i].preco = (double*)malloc(1*sizeof(double));
		cout << "Informe o pre�o do "<< i+1 << "� produto" << endl;
		cin >> *(p1[i].preco);	
	}
	
		for(int i=0; i<tam-1; i++){
		for(int j=0; j<tam-i-1; j++){
			if( *(p1[j].preco) < *(p1[j+1].preco)){
				// troca o c�digo de posi��o caso teste seja verdadeiro.
				aux = *(p1[j].codigo);
				*(p1[j].codigo) = *(p1[j+1].codigo);
				*(p1[j+1].codigo)	= aux;
				// troca o nome de posic�o caso teste seja verdadeiro.
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
	
	cout << "A m�dia dos valores dos produtos cadastrados �: R$ " << soma/tam << endl;
	
	//Imprimindo todos os produtos	
	cout << "Os produtos cadastrados s�o: " << endl;
	for(int i=0; i<tam; i++){
		cout << endl;
		cout << "C�digo: "  << *p1[i].codigo << endl;
		cout << "Nome: ";
		for(int j=0; j<=sizeof p1[i].nome; j++){
			cout << p1[i].nome[j];
		}
		cout << endl;
		cout << "Pre�o: " << *p1[i].preco << endl;
		cout << "--------------------------------------------" << endl;
	}
	

	
	
	
	
	
	return 0;
}
