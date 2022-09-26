#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int base[4][3];

	base[0][0] =180; 
	base[1][0] =230;
	base[2][0] =250;
	base[3][0] =350;
	
	base[0][1] =75;
	base[1][1] =110;
	base[2][1] =170;
	base[3][1] =200;
	
	base[0][2] =20;
	base[1][2] =70;
	base[2][2] =100;
	base[3][2] =65;	
	
	int prato, sobremesa, bebida, total; 
	
		
	do{
		cout << "Escolha seu prato pelo número:" << endl;
		cout << "1 - Vegetariano:" << endl;
		cout << "2 - Peixe" << endl;
		cout << "3 - Frango" << endl;
		cout << "4 - Carne" << endl;
		cin >> prato;
	}while(prato <= 0 || prato >= 5 );
	
	do{
		cout << "Escolha sua sobremesa pelo número:" << endl;
		cout << "1 - Abacaxi:" << endl;
		cout << "2 - Sorvete Diet:" << endl;
		cout << "3 - Mousse Diet:" << endl;
		cout << "4 - Mausse Chocolate:" << endl;
		cin >> sobremesa;
	}while(sobremesa <= 0 || sobremesa >= 5 );
		
	do {
		cout << "Escolha sua bebida pelo número:" << endl;
		cout << "1 - Chá:" << endl;
		cout << "2 - Suco de Laranja:" << endl;
		cout << "3 - Suco de Melão:" << endl;
		cout << "4 - Refrigerante Diet:" << endl;
		cin >> bebida;
	}while(sobremesa <= 0 || sobremesa >= 5 );
			
		total = base[prato-1][0] + base[sobremesa-1][1] + base[bebida-1][2];
	
		cout << "Sua refeição tem: " << total << " calorias" << endl;
		
	return 0;
}
