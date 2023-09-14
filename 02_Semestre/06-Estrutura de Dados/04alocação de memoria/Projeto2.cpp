/*
Exercício 2:
Elabore um programa que crie um novo tipo chamado pessoa, 
com os campos nome, sexo e ponteiro para idade. 
Leia do usuário o tamanho de um vetor de pessoas e faça esse tamanho 
ser para todos os vetores. 
Em seguida, faça a alocação dinâmica desse vetor de struct, usando malloc, 
calloc e realloc, mas com ponteiros diferentes, ou seja, serão criados 3 vetores. 
Em seguida preencha cada campo de cada vetor de pessoa e exiba os dados na tela.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

struct PESSOA {
	char nome[15];
	char sexo[15];
	int *idade = NULL;	
};


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	PESSOA *p1=NULL, *p2=NULL, *p3=NULL;
	int tam = 0;
	
	cout << "Informe o tamanho do Array: " << endl;
	cin >> tam;		
	
	//malloc
	p1 = (PESSOA*)malloc(tam * sizeof(PESSOA));

	//calloc
	p2 = (PESSOA*)calloc(tam, sizeof(PESSOA));
	
	//realloc
	p3 = (PESSOA*)realloc(p2, tam* sizeof(PESSOA));
	
	
	for(int i=0; i<tam; i++){
		
		cout << "Informe o nome do funcionário" << endl;
		cin >> p1[i].nome;
		cout << "Informe o Sexo " << endl;
		cin >> p1[i].sexo;
		p1[i].idade = (int*)malloc(1*sizeof(int));
		cout << "Informe o idade do funcionário" << endl;
		cin >> *(p1[i].idade);	
	}
	
	for(int i=0; i<tam; i++){
		cout << endl;
		cout << "Nome: "  << p1[i].nome << endl;;
		cout << "Sexo: "  << p1[i].sexo << endl;
		cout << "Sálario: " << *p1[i].idade << endl;
		cout << "--------------------------------------------" << endl;
	}
	
	
}
