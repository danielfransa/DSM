 /*
 A  Microsoft est� contratando funcion�rios para realizarem testes no gerenciador de mem�ria
 do seu novo computador. Seu programa dever� ler 5 n�meros inteiros, 5 n�meros decimais, 5 letras, 
 armazen�-las em uma �nica struct contendo vetor de inteiro, vetor de decimais e vetor de char. 
 Ent�o, atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros pelo 
 n�mero 100, os decimais por 1.99, e as letras por �W�. Depois da substitui��o, o programa dever� 
 exibir o valor das vari�veis j� devidamente atualizadas.
 */
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
using namespace std;

struct TESTE {
	int *num1;
	double *num2;
	char *let;
};

int main() {
setlocale(LC_ALL, "Portuguese");
	
	TESTE teste[5];
	
	int inteiros[5];
	double decimais[5];
	char letras[5];
	
	for(int i=0; i<5; i++){
		teste[i].num1 = &inteiros[i];
		
		cout << "Insira o " << i+1 << "� n�mero inteiro" << endl;
		cin >> inteiros[i];
		
	}
	cout << endl;
	for(int i=0; i<5; i++){
		teste[i].num2 = &decimais[i];
		
		cout << "Insira o " << i+1 << "� n�mero decimal" << endl;
		cin >> decimais[i];

	}
		cout << endl;
	for(int i=0; i<5; i++){
		teste[i].let = &letras[i];

		cout << "Insira o " << i+1 << "� letra" << endl;
		cin >> letras[i];
	}	
	
	for(int i=0; i<5; i++){
		*(teste[i].num1) = 100;
		*(teste[i].num2) = 1.99;
		(teste[i].let) = "W";
		
		
	}
	cout << "---------------------------------" << endl;
	for(int i=0; i<5; i++){
		
		cout << i+1 << "� inteiro -> " << *(teste[i].num1) << endl;

	}
	cout << "---------------------------------" << endl;
	for(int i=0; i<5; i++){

		cout << i+1 << "� Decimal -> " << *(teste[i].num2) << endl;
		

	}
	cout << "---------------------------------" << endl;	
	for(int i=0; i<5; i++){
		
		cout << i+1 << "� letra -> " << *(teste[i].let) << endl;
		
	}
	

	return 0;
}
