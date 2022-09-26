/*
 Crie um programa simples que exiba o fatorial de um n�mero e calcule o tempo de execu��o do
programa usando a biblioteca ctime e a fun��o clock. Pe�a para o usu�rio dar o n�mero que deseja fazer
fatorial. Fa�a a an�lise da complexidade desse c�digo, escreva como coment�rio no final.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	long fat=1;
	clock_t tempo;
	
	cout << "Insira um n�mero que deseja fatorar: " << endl;
	cin >> num;
	
	tempo = clock();
	for(int i=num; i>1; i--){
		fat = fat*i;
	}
	
	cout << "O fatorial de " << num << " � " << fat << endl;
	cout << "Tempo para o processamento foi de: " << (float)tempo << endl;
	
	/*
	Pdemos ver que esse loop tem uma complexidade de O(N) sendo linear conforme o tamanho da entrada.
	*/
		
	
	return 0;
}
