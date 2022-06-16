#include <iostream>
#include <locale>
using namespace std;


void menu(int op){
	cout << "Escolha qual a operação conforme número abaixo:" << endl;
	cout << "1 - SOMA:"<< endl;
	cout << "2 - SUBTRAÇÃO:"<< endl;
	cout << "3 - MULTIPLICAÇÃO:"<< endl;
	cout << "4 - DIVISÃO:"<< endl;
}

float soma(float a, float b){
	return (a+b);
}

float subtracao(float a, float b){
	return (a-b);
}

float multiplicacao(float a, float b){
	return (a*b);
}

float divisao(float a, float b){
	return (a/b);
}


int main() {
setlocale(LC_ALL, "Portuguese");

int op;
float a, b;
	
	do {
	menu(op);
	cin >> op;
	}while(op<=0 || op>=5);
	
	
	cout << "Informe o 1º número:" << endl;
	cin >> a;
	cout << "Informe o 2º número" << endl;
	cin >> b;
	
	switch (op){
		case 1:
			cout<< "O resultado da soma é: "<< soma(a, b);
			break;
		case 2:
			cout<< "O resultado da subtração é: "<< subtracao(a, b);
			break;
		case 3:
			cout<< "O resultado da multiplicação é: "<< multiplicacao(a, b);
			break;
		case 4:
			cout<< "O resultado da divisão é: "<< divisao(a, b);
			break;
	}
	
	return 0;
}


