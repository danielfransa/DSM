/*
Fazer um programa que l� um conjunto de 10 valores inteiros   
e verifica se algum dos valores � igual a m�dia dos mesmos.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valores[10];
	int soma=0, media=0, cont=0;

	
	for(int i=0; i<10; i++){
		cout << "Informe o " << i+1 << "� valor" << endl;
		cin >> valores[i];
		soma += valores[i];
	}
	
	media = soma / 10;
	
	
	for(int i=0; i<10; i++){
		if(valores[i] == media ){
			cout << "O " << i+1 << "� valor digitado � igual a m�dia " << valores[i] << endl;
			cont++;
		}
	}
	
	if(cont == 0){
		cout << "Nenhum valor igual a m�dia!!! m�dia = " << media << endl;
	}
	
}
