#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int local, retorno, valor;
	
	do{
		cout << "Informe o Destino conforme número abaixo:"<<endl;
		cout << "1 - Reginão Norte:" << endl;
		cout << "2 - Região Nordeste:" << endl;
		cout << "3 - Região Centro-Oeste:"<< endl;
		cout << "4 - Região Sul:"<<endl;
		cin >> local;
	}while(local <= 0 || local >=5 );
	
	do{
		cout << "Sua viagem inclue retorno?"<<endl;
		cout << "1 - Não:" << endl;
		cout << "2 - Sim:" << endl;
		cin >> retorno;
	}while(retorno <= 0 || retorno >=3 );
	

	switch (local){
		case 1:
			if(retorno == 1){
			cout << "Valor da Passagem é: R$ 500,00"<< endl;
			break;
			}
			cout << "Valor da Passagem é: R$ 900,00" << endl;
			break;
		case 2:
			if(retorno == 1){
			cout << "Valor da Passagem é: R$ 350,00"<< endl;
			break;
			}
			cout << "Valor da Passagem é: R$ 650,00" << endl;
			break;
		case 3:
			if(retorno == 1){
			cout << "Valor da Passagem é: R$ 350,00"<< endl;
			break;
			}
			cout << "Valor da Passagem é: R$ 600,00" << endl;
			break;
		case 4:
			if(retorno == 1){
			cout << "Valor da Passagem é: R$ 300,00"<< endl;
			break;
			}
			cout << "Valor da Passagem é: R$ 550,00" << endl;
			break;
	}

	return 0;
}
