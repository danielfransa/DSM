#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

int opcao;
	
float saldo, deposito, retirada;

	while(opcao != 4 ){
		cout << "Escolha a opção abaixo: " << endl;
		cout << "1 - Deposito: " << endl;
		cout << "2 - Retirada: " << endl;
		cout << "3 - Saldo: " << endl;
		cout << "4 - Sair: " << endl;
		cin >> opcao;
	
			if (opcao == 1) {
				cout << "Digite o valor do deposito: " << endl;
				cin >> deposito;
				saldo = saldo + deposito;
			}else
			if (opcao == 2) {
				cout << "Digite o valor do retirada: " << endl;
				cin >> retirada;
				if(retirada < saldo){
				saldo = saldo - retirada;
				}else
				cout << "Saldo Insuficiente!" << endl;
			}else
			if (opcao == 3) {
				cout << "Seu Saldo é: " << saldo << endl;
			}else
			if (opcao == 4) {
				cout << "Obrigado por utilizar nosso sistema!: ";
			}
	}
			
	return 0;

}
