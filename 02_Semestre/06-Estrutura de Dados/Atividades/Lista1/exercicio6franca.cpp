/*
Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A fun��o deve receber 
esse termo e retornar o valor desse termo ap�s a s�rie de Fibonacci.A s�rie � formada pela sequ�ncia: 
1,1,2,3,5,8,13,21,34,....,etc.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int termo1 = 0, termo2 = 1, soma = 0, i = 1, termoAteSoma;
	
	//como o exerc�cio pede para receber o termo coloquei que o usu�rio digite pode ser 15� ou qualquer outro
	cout << "Indique o termo at� onde deve ser somado." << endl;
	cin >> termoAteSoma;
	
	// primeiro termo da serie	
	cout << "1" << "-";
	// la�o que calcula e serie de Fibonacci.
	while(i < termoAteSoma){
		soma = termo1 + termo2;
		cout << soma << "-";
		termo1 = termo2;
		termo2 = soma;
		soma = 0;
		i++;
	}
		
}
