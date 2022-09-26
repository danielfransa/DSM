#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

//variaveis:

int n1, n2, n3;

//Entradas
	cout << "Insira o Primeiro Número:" << endl;
	cin >> n1;
	
	cout <<"Insira o Segundo Número:" << endl;
	cin >> n2;
	
	cout <<"Insira o Terceiro Número:" << endl;
	cin >> n3;

//Cálculo:

	if(n1 == n2 and n1 == n3){
		cout << "Seu triangulo é Equilátero" << endl;
	} 
	if(n1 != n2 and n1 == n3){
		cout << "Seu triangulo é Isóseles";
	}
	if(n1 != n2 and n1 != n3 and n2 == n3 ){
		cout << "Seu triangulo é Isóseles";
	}
	if(n1 == n2 and n1 != n3 and n2 != n3 ){
		cout << "Seu triangulo é Isóseles";
   }
   	if(n1 != n2 and n1 != n3 and n2 != n3 ){
		cout << "Seu triangulo é Escaleno";
   }


	return 0;

}
