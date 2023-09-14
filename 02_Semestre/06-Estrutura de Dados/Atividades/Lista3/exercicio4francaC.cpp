/*
4) Considere o seguinte código:
char* nome1 = "Luis";
char* nome2 = "Fernando";
char* nome3 = "Vitoria";
char* nome4 = "Leticia";
Use strcat para concatenar os nomes.
Crie a função: void exibir (char arr, int tamanho);
Escreva o conteúdo da função exibir, sabendo que ela deve percorrer o 
array de nomes e printar o array inteiro utilizando ponteiro.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;

void exibir (char** arr, int tamanho);

void exibir (char** arr, int tamanho){
	
	char concat[50];
	
	    for(int i=0; i<tamanho; i++){
		strcat(concat, arr[i]);
		strcat(concat, " ");
		}
		
		cout << concat;

}
int main() {
	
char* nome1 = "Luis";
char* nome2 = "Fernando";
char* nome3 = "Vitoria";
char* nome4 = "Leticia";

char* nomes[4] = {nome1, nome2, nome3, nome4};

	exibir(nomes, 4);
	
	return 0;
}
