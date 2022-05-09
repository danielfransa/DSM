#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	//Declarando Variaveis
	string nome;
	int idade;
	
	//escrevendo um texto na tela
	cout << "Escreva seu nome: \n";
	//Lendo o nome digitado no teclado
	cin >> nome;
	
	cout << "Informe sua idade: \n";
	cin >> idade;
	
	cout << "Olá, " << nome << "!! \n";
	cout << "Hello World!!! \n";
	cout << "Sua idade é " << idade << "!! \n";
	
	//Estrutura condicional
	if (idade >= 18){
		cout << "Você é maior de idade \n";
	}else{
		cout << "Você é menor de idade \n";
	}

	return 0;
	
}
