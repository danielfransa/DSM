/*
Exercício 1: 
  Criar uma struc funcionario: nome, cargo e salario(ponteiro).
  Cuidado: salario é ponteiro.
  Popular o vetor de struct com 3 funcionarios, utilizando ponteiro.
  Dica: para armazenar os salários dos funcionários precisa utilizar vetor.
  Exiba os funcionários na tela, utilizando ponteiro.
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
		
		cout << "Informe o nome do funcionário" << endl;
		cin >> funcionario[i].nome;
		cout << "Informe o cargo do funcionário" << endl;
		cin >> funcionario[i].cargo;
		cout << "Informe o Salário do funcionário" << endl;
		cin >> *(funcionario[i].salario);
	}
	
	for(int i=0; i<3; i++){
		cout << endl;
		cout << "Nome: "  << funcionario[i].nome << endl;
		cout << "Cargo: "  << funcionario[i].cargo << endl;
		cout << "Sálario: " << *(funcionario[i].salario) << endl;
		cout << "--------------------------------------------" << endl;
	}
	
	
	
	return 0;
}
