/*
Criar uma função que retorna o seguinte: A função recebe 4 valores do tipo int e retornar o triplo do 1º + o quadrado dos outros dois. 
Vai retornar o tipo float, ou seja, tem que fazer um cast do valor (procurar cast de int para float na internet).
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;


main() {
	
	int valor1, valor2, valor3, valor4, aux; 
	float soma;
	
	cout << "Insira o 1º valor:" << endl;
	cin >> valor1;
	
	cout << "Insira o 2º valor:" << endl;
	cin >> valor2;
	
	cout << "Insira o 3º valor:" << endl;
	cin >> valor3;
	
	cout << "Insira o 4º valor:" << endl;
	cin >> valor4;
	
	valor1 = valor1*3;
	
	valor2 = valor2*valor2;
	valor3 = valor3*valor3;
	valor4 = valor4*valor4;
		
	soma = valor1+valor2+valor3+valor4;
	
	cout << "O valor é: " << soma << endl; 
	
	
}
