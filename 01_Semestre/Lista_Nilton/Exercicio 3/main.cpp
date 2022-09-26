#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int pequeno, medio, grande, valor;
	
	cout << "Informe a quantidade de camisatas pequenas do pedido: " << endl;
	cin >> pequeno;
	
	cout << "Informe a quantidade de camisatas medias do pedido: " << endl;
	cin >> medio;
	
	cout << "Informe a quantidade de camisatas grande do pedido: " << endl;
	cin >> grande;
	
		valor = (pequeno*10)+(medio*12)+(grande*15);
		
	cout << " Fram vendidas " << pequeno+medio+grande << " Camisas. O valor arrecadado sera de R$: " << valor << endl;
	
	return 0;
}
