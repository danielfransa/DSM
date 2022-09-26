/*
Escreva um programa que calcule a dist�ncia entre dois pontos no plano cartesiano. 
Cada ponto � um par (x,y) de reais (double). Escreva uma estrutura para armazenar 
cada ponto. O c�lculo da dist�ncia dever� ser feita em uma fun��o separada que vai 
receber os dois pontos (na forma de struct), fazer o c�lculo e retornar o resultado 
para ser exibido na main.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <cmath>

using namespace std;

struct PONTOS {
	double x1, x2, y1, y2;
};

double calculaDistancia(PONTOS p);

double calculaDistancia(PONTOS p){
	
	return sqrt(pow((p.x2 - p.x1), 2) + pow((p.y2 - p.y1), 2));
} 



int main() {
	setlocale(LC_ALL, "Portuguese");
	
	PONTOS pontos;
	
	cout << "Digite a coordenada do primeiro ponto (x y)" << endl;
	cin >> pontos.x1;
	cin >> pontos.y1;
	
	cout << "Digite a coordenada do segundo ponto (x y)" << endl;
	cin >> pontos.x2;
	cin >> pontos.y2;
	
	//cout << "Ponto 1: " << "(" << pontos.x1 << " " << pontos.y1 << ")" << endl;
	//cout << "Ponto 2: " << "(" << pontos.x2 << " " << pontos.y2 << ")" << endl;	
	
	cout << "A dist�ncia entre os dois pontos �: " << calculaDistancia(pontos);
	
	return 0;
}
