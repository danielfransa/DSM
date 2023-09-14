#include <iostream>
#include<cstdlib>
#include<locale>
#include<string>

using namespace std;




struct Pessoa{
	char nome[20], sobrenome[30];
	int idade;
};

main() {
	setlocale(LC_ALL, "Portuguese");

	Pessoa p1, p2;
	
	p1.idade = 25;
	strcpy(p1.nome "Ricardo");
	sobrenome = "Albuquerque"
	
	strcpy(p2.nome, p1.nome);
	
	cout << p2.nome << endl;
	
	return 0;
}
