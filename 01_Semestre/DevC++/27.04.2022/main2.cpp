#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float n1, n2, resultado;
	
	do {
		cout << "=== Menu ===" << endl;
		cout << "1-Soma" << endl;
		cout << "2-Subtra��o" << endl;
		cout << "3-Multiplica��o" << endl;
		cout << "4-Divis�o" << endl;
		cout << "5-Sair" << endl;
		cout << "===========" << endl;
		cout << "Escolha a op��o" << endl;
		cin >> op;
	
		//Estrutura escolha caso
		switch(op){
					case 1: cout << "Informe Primeiro N�mero: \n";
							cin >> n1;
							cout << "Informe Segundo N�mero: \n";
							cin >> n2;
							resultado = n1 + n2;
							break;
			
					case 2:
							cout << "Informe Primeiro N�mero: \n";
							cin >> n1;
							cout << "Informe Segundo N�mero: \n";
							cin >> n2;
							resultado = n1 - n2;
							break;
				
					case 3:
							cout << "Informe Primeiro N�mero: \n";
							cin >> n1;
							cout << "Informe Segundo N�mero: \n";
							cin >> n2;
							resultado = n1 * n2;
							break;
		
					case 4:
							cout << "Informe Primeiro N�mero: \n";
							cin >> n1;
							cout << "Informe Segundo N�mero: \n";
							cin >> n2;
							resultado = n1 / n2;
							break;
		}
			if (op == 5 ){
				cout << "Obrigado por utilizar nosso programa!";
			}else{
				cout << "O Resultado �: " << resultado <<"\n";
			}
		
	}while(op != 5 );
	
	
	
		
		
	
	return 0;
}
