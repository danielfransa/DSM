/* crie um programa que fa�a o calulo da �rea e perimetro do ret�ngulo,
usando fun��o. Os lados do ret�ngulo s�o 4 e 5.
*/ 
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

// cabecalhos
int perimetro(int, int);
int area(int, int);

//fun��o que calcula o perimetro
int perimetro(int a, int b){
	int per = (a*2) + (b*2);
	
	return per;
}

//fun��o que calcula a �rea
int area(int a, int b){
	int are = a * b;
	
	return are;
}

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int	a = 4, b = 5;
	
	//chamada fun��o perimetro.	
	cout << "O Valor do perimetro �: " << perimetro(a, b) << endl;
	
	//chamada fun��o �rea.
	cout << "O Valor da �rea �: " << area(a, b)<< endl;
		
}
