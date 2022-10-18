/*
15. Escreva um programa que determina número usando recursão. 
Por exemplo:se o usuário inserir o número 250, a saída esperada deve ser: 
“o número digitado tem 3 dígitos”.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
int dig;
float num;


int counter(float num){
	
	if(num > 0 & num < 1){
		return dig;	
	}
	num = num/10;
	dig++;
	counter(num);
	
	
}



int main() {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira um número inteiro: " << endl;
	cin >> num;
	
	cout << "O número digitado tem " << counter(num) << " dígitos." << endl;
	
	
	return 0;
}
