/*
 O programa deve criar uma matriz quadr�tica (dinamicamente) de valores zeros.
a) Perguntar ao usu�rio que tamanho ser� essa matriz. Utilizar um ponteiro para indicar o tamanho
dessa matriz.
b) alocar em tempo de execu��o (dinamicamente) uma matriz quadrada de zeros, passando como
par�metros o n�mero de linhas e colunas.
c) Inclua a biblioteca ctime e utilize a fun��o clock para determinar o tempo de execu��o da aloca��o
de mem�ria com o tamanho da matriz quadrada de tamanho 10 e 1000000.

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	
	int *tam, aux;
	int **matrix;
	clock_t tempo;
	
	
		tam = &aux;
	
		cout << "Qual o tamanho da matrix: " << endl;
		cin >> *tam;
		
		//aloca��o dinamica em linhas
		
		tempo = clock() - tempo;
		
		matrix = new int*[*tam];
		for(int i=0; i<*tam; i++ ){
			matrix[i] = new int[*tam];
		}
		
		/*
		matrix = (int**)malloc(aux * sizeof(int*));
		for (int i=0;i<aux; i++){
	  		matrix[i] = (int*)malloc(1 * sizeof(int));
		}
		*/
		
		for(int i=0; i<*tam; i++){
			for(int j=0; j<*tam; j++){
				matrix[i][j] = 0;
			}
		}
		
		cout << "Tempo para a aloca��o foi de: " << tempo << endl;
		
		/*
		for(int i=0; i<*tam; i++){
			cout << endl;
			for(int j=0; j<*tam; j++){
				cout << matrix[i][j];
			}
		}
		*/
	
	return 0;
}
