/*
Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A função deve receber 
esse termo e retornar o valor desse termo após a série de Fibonacci.A série é formada pela sequência: 
1,1,2,3,5,8,13,21,34,....,etc.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int termo1 = 0, termo2 = 1, soma = 0, i = 1, termoAteSoma;
	
	//como o exercício pede para receber o termo coloquei que o usuário digite pode ser 15º ou qualquer outro
	cout << "Indique o termo até onde deve ser somado." << endl;
	cin >> termoAteSoma;
	
	// primeiro termo da serie	
	cout << "1" << "-";
	// laço que calcula e serie de Fibonacci.
	while(i < termoAteSoma){
		soma = termo1 + termo2;
		cout << soma << "-";
		termo1 = termo2;
		termo2 = soma;
		soma = 0;
		i++;
	}
		
}
