/* crie um programa que faça o calulo da área e perimetro do retângulo,
usando função. Os lados do retângulo são 4 e 5.
*/ 
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

// cabecalhos
int perimetro(int, int);
int area(int, int);

//função que calcula o perimetro
int perimetro(int a, int b){
	int per = (a*2) + (b*2);
	
	return per;
}

//função que calcula a área
int area(int a, int b){
	int are = a * b;
	
	return are;
}

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int	a = 4, b = 5;
	
	//chamada função perimetro.	
	cout << "O Valor do perimetro é: " << perimetro(a, b) << endl;
	
	//chamada função área.
	cout << "O Valor da área é: " << area(a, b)<< endl;
		
}
