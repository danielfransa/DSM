/*
16. Fa�a uma rotina recursiva para calcular a somat�ria de todos os n�mero de 1 a N (N ser� lido do teclado).
Por exemplo:se N � igual a 5, a somat�ria dos n�meros ser� igual a 15, ou seja, 1+2+3+4+5= 15.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
int n, aux;

int calc(int n){
	
	if(n == 0){
		return aux;
	}
	
	aux += n;
	calc(n-1);
}
	


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira um n�mero: " << endl;
	cin >> n;
	
	
	cout << "A somat�ria de todos os n�mero de 1 a " << n << " �: " << calc(n) << endl;
	
	
	return 0;
}
