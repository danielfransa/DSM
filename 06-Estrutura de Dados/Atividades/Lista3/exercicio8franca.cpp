/*
 Crie um programa que leia 9 valores inteiros do usuário. Esses valores devem ser variados, podendo ser repetidos. 
 a)Use ponteiro para popular o vetor.
 b)Ordene o vetor de forma crescente (use bubble sort)
 c)Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
 d)Exiba cada elemento do vetor e da matriz, usando ponteiro.
 
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[9], vetor2[3][3], *prt[9], *prt2[3][3], aux, a=0;
	
	//Recebe no vetor
	for(int i=0; i<9; i++){
		prt[i] = &vetor[i];
		cout << "Insira o " << i+1 << "º valor" << endl;
		cin >> *(prt[i]);
	}
	
	//ordena o vetor
	for(int i=0; i<9; i++){
		for(int j=0; j<9-i-1; j++){
			if( *(prt[j]) > *(prt[j+1])){
				aux = *(prt[j]);
				*(prt[j]) = *(prt[j+1]);
				*(prt[j+1]) = aux;
			}
		}
	}
	/*
	//imprime o primeiro vetor ordenado
	for(int i=0; i<9; i++){
		
		cout << *(prt[i]) << endl;
	}
	*/
	
	//Passa para matrix
	for(int i=0; i<3; i++){	
		for(int j=0; j<3; j++){
			prt2[i][j] = &vetor2[i][j];
			
			*(prt2[i][j]) = *(prt[a]);
			
			a++;
		}
	}
	
	// imprime a matrix.
	cout << endl;
	for(int i=0; i<3; i++){	
		for(int j=0; j<3; j++){
			cout << *(prt2[i][j]) << " | ";
		}
		cout << endl;
	}
	
	
	
	return 0;
}
