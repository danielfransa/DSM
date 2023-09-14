/*
Exerc�cio 1: 
  Criar uma struc funcionario: nome, cargo e salario(ponteiro).
  Cuidado: salario � ponteiro.
  Popular o vetor de struct com 3 funcionarios, utilizando ponteiro.
  Dica: para armazenar os sal�rios dos funcion�rios precisa utilizar vetor.
  Exiba os funcion�rios na tela, utilizando ponteiro.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

struct FUNCIONARIO{
	string nome;
	string cargo;
	float *salario = NULL;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FUNCIONARIO funcionario[3];
	float salario1[3];
	
	
	for(int i=0; i<3; i++){
		funcionario[i].salario = &salario1[i];
		
		cout << "Informe o nome do funcion�rio" << endl;
		cin >> funcionario[i].nome;
		cout << "Informe o cargo do funcion�rio" << endl;
		cin >> funcionario[i].cargo;
		cout << "Informe o Sal�rio do funcion�rio" << endl;
		cin >> *(funcionario[i].salario);
	}
	
	for(int i=0; i<3; i++){
		cout << endl;
		cout << "Nome: "  << funcionario[i].nome << endl;
		cout << "Cargo: "  << funcionario[i].cargo << endl;
		cout << "S�lario: " << *(funcionario[i].salario) << endl;
		cout << "--------------------------------------------" << endl;
	}
	
	
	
	return 0;
}
