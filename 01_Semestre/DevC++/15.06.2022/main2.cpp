#include <iostream>
#include <locale>
using namespace std;


void menu(int op){
	cout << "Escolha qual a opera��o conforme n�mero abaixo:" << endl;
	cout << "1 - SOMA:"<< endl;
	cout << "2 - SUBTRA��O:"<< endl;
	cout << "3 - MULTIPLICA��O:"<< endl;
	cout << "4 - DIVIS�O:"<< endl;
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
	
	
	cout << "Informe o 1� n�mero:" << endl;
	cin >> a;
	cout << "Informe o 2� n�mero" << endl;
	cin >> b;
	
	switch (op){
		case 1:
			cout<< "O resultado da soma �: "<< soma(a, b);
			break;
		case 2:
			cout<< "O resultado da subtra��o �: "<< subtracao(a, b);
			break;
		case 3:
			cout<< "O resultado da multiplica��o �: "<< multiplicacao(a, b);
			break;
		case 4:
			cout<< "O resultado da divis�o �: "<< divisao(a, b);
			break;
	}
	
	return 0;
}


