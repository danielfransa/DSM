#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int local, retorno, valor;
	
	do{
		cout << "Informe o Destino conforme n�mero abaixo:"<<endl;
		cout << "1 - Regin�o Norte:" << endl;
		cout << "2 - Regi�o Nordeste:" << endl;
		cout << "3 - Regi�o Centro-Oeste:"<< endl;
		cout << "4 - Regi�o Sul:"<<endl;
		cin >> local;
	}while(local <= 0 || local >=5 );
	
	do{
		cout << "Sua viagem inclue retorno?"<<endl;
		cout << "1 - N�o:" << endl;
		cout << "2 - Sim:" << endl;
		cin >> retorno;
	}while(retorno <= 0 || retorno >=3 );
	

	switch (local){
		case 1:
			if(retorno == 1){
			cout << "Valor da Passagem �: R$ 500,00"<< endl;
			break;
			}
			cout << "Valor da Passagem �: R$ 900,00" << endl;
			break;
		case 2:
			if(retorno == 1){
			cout << "Valor da Passagem �: R$ 350,00"<< endl;
			break;
			}
			cout << "Valor da Passagem �: R$ 650,00" << endl;
			break;
		case 3:
			if(retorno == 1){
			cout << "Valor da Passagem �: R$ 350,00"<< endl;
			break;
			}
			cout << "Valor da Passagem �: R$ 600,00" << endl;
			break;
		case 4:
			if(retorno == 1){
			cout << "Valor da Passagem �: R$ 300,00"<< endl;
			break;
			}
			cout << "Valor da Passagem �: R$ 550,00" << endl;
			break;
	}

	return 0;
}
