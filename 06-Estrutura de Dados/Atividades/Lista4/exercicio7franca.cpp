/*
 Crie um programa simples que exiba o fatorial de um número e calcule o tempo de execução do
programa usando a biblioteca ctime e a função clock. Peça para o usuário dar o número que deseja fazer
fatorial. Faça a análise da complexidade desse código, escreva como comentário no final.
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
	
	cout << "Insira um número que deseja fatorar: " << endl;
	cin >> num;
	
	tempo = clock();
	for(int i=num; i>1; i--){
		fat = fat*i;
	}
	
	cout << "O fatorial de " << num << " é " << fat << endl;
	cout << "Tempo para o processamento foi de: " << (float)tempo << endl;
	
	/*
	Pdemos ver que esse loop tem uma complexidade de O(N) sendo linear conforme o tamanho da entrada.
	*/
		
	
	return 0;
}
