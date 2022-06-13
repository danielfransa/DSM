#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float pao, broa, valor_total, poupanca;
	
		cout << "Quantos Pães foram vendidos" << endl;
		cin >> pao;
		cout << "Quantas Broas foram vendidas" << endl;
		cin >> broa;
		
		valor_total = (pao * 0.12) + (broa * 1.50);
		
		poupanca = valor_total * 0.10;
		
		cout << "Foram vendidos " << pao << " Pães e " << broa << " Broas " << endl;  
		cout << "Gerando um valor total de: R$ " << valor_total << endl;
		cout << "A quandidade de R$ " << poupanca << " deve ser destinado a poupança";
		
	return 0;
}
