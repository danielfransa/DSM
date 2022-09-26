 /*
 A  Microsoft está contratando funcionários para realizarem testes no gerenciador de memória
 do seu novo computador. Seu programa deverá ler 5 números inteiros, 5 números decimais, 5 letras, 
 armazená-las em uma única struct contendo vetor de inteiro, vetor de decimais e vetor de char. 
 Então, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo 
 número 100, os decimais por 1.99, e as letras por ’W’. Depois da substituição, o programa deverá 
 exibir o valor das variáveis já devidamente atualizadas.
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
		
		cout << "Insira o " << i+1 << "º número inteiro" << endl;
		cin >> inteiros[i];
		
	}
	cout << endl;
	for(int i=0; i<5; i++){
		teste[i].num2 = &decimais[i];
		
		cout << "Insira o " << i+1 << "º número decimal" << endl;
		cin >> decimais[i];

	}
		cout << endl;
	for(int i=0; i<5; i++){
		teste[i].let = &letras[i];

		cout << "Insira o " << i+1 << "º letra" << endl;
		cin >> letras[i];
	}	
	
	for(int i=0; i<5; i++){
		*(teste[i].num1) = 100;
		*(teste[i].num2) = 1.99;
		(teste[i].let) = "W";
		
		
	}
	cout << "---------------------------------" << endl;
	for(int i=0; i<5; i++){
		
		cout << i+1 << "º inteiro -> " << *(teste[i].num1) << endl;

	}
	cout << "---------------------------------" << endl;
	for(int i=0; i<5; i++){

		cout << i+1 << "º Decimal -> " << *(teste[i].num2) << endl;
		

	}
	cout << "---------------------------------" << endl;	
	for(int i=0; i<5; i++){
		
		cout << i+1 << "º letra -> " << *(teste[i].let) << endl;
		
	}
	

	return 0;
}
