/*
16. Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N será lido do teclado).
Por exemplo:se N é igual a 5, a somatória dos números será igual a 15, ou seja, 1+2+3+4+5= 15.
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
	
	cout << "Insira um número: " << endl;
	cin >> n;
	
	
	cout << "A somatória de todos os número de 1 a " << n << " é: " << calc(n) << endl;
	
	
	return 0;
}
