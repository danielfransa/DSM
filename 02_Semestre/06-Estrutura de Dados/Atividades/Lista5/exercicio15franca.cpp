/*
15. Escreva um programa que determina n�mero usando recurs�o. 
Por exemplo:se o usu�rio inserir o n�mero 250, a sa�da esperada deve ser: 
�o n�mero digitado tem 3 d�gitos�.
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
	
	cout << "Insira um n�mero inteiro: " << endl;
	cin >> num;
	
	cout << "O n�mero digitado tem " << counter(num) << " d�gitos." << endl;
	
	
	return 0;
}
