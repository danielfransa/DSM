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
		cout << "2-Subtração" << endl;
		cout << "3-Multiplicação" << endl;
		cout << "4-Divisão" << endl;
		cout << "5-Sair" << endl;
		cout << "===========" << endl;
		cout << "Escolha a opção" << endl;
		cin >> op;
	
		//Estrutura escolha caso
		switch(op){
					case 1: cout << "Informe Primeiro Número: \n";
							cin >> n1;
							cout << "Informe Segundo Número: \n";
							cin >> n2;
							resultado = n1 + n2;
							break;
			
					case 2:
							cout << "Informe Primeiro Número: \n";
							cin >> n1;
							cout << "Informe Segundo Número: \n";
							cin >> n2;
							resultado = n1 - n2;
							break;
				
					case 3:
							cout << "Informe Primeiro Número: \n";
							cin >> n1;
							cout << "Informe Segundo Número: \n";
							cin >> n2;
							resultado = n1 * n2;
							break;
		
					case 4:
							cout << "Informe Primeiro Número: \n";
							cin >> n1;
							cout << "Informe Segundo Número: \n";
							cin >> n2;
							resultado = n1 / n2;
							break;
		}
			if (op == 5 ){
				cout << "Obrigado por utilizar nosso programa!";
			}else{
				cout << "O Resultado é: " << resultado <<"\n";
			}
		
	}while(op != 5 );
	
	
	
		
		
	
	return 0;
}
