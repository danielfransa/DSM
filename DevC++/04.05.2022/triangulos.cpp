#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

//variaveis:

int n1, n2, n3;

//Entradas
	cout << "Insira o Primeiro N�mero:" << endl;
	cin >> n1;
	
	cout <<"Insira o Segundo N�mero:" << endl;
	cin >> n2;
	
	cout <<"Insira o Terceiro N�mero:" << endl;
	cin >> n3;

//C�lculo:

	if(n1 == n2 and n1 == n3){
		cout << "Seu triangulo � Equil�tero" << endl;
	} 
	if(n1 != n2 and n1 == n3){
		cout << "Seu triangulo � Is�seles";
	}
	if(n1 != n2 and n1 != n3 and n2 == n3 ){
		cout << "Seu triangulo � Is�seles";
	}
	if(n1 == n2 and n1 != n3 and n2 != n3 ){
		cout << "Seu triangulo � Is�seles";
   }
   	if(n1 != n2 and n1 != n3 and n2 != n3 ){
		cout << "Seu triangulo � Escaleno";
   }


	return 0;

}
