/*
Crie um programa que popule um vetor de 10 valores inteiros, passados pelo usuário. Depois disso, 
pergunte ao usuário se ele quer ordenar de forma crescente ou decrescente. Pesquise o bubble sort 
na internet. Dependendo da resposta do usuário, crie um segundo vetor para armazenar os 
valores ordenados de forma crescente ou decrescente. As partes de ordenar de forma crescente 
ou decrescente devem ser feitas em duas funções separadas. A função deve retornar o vetor para 
ser exibido na main.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int *crescente(int, int);
int *decrescente(int, int);

int *crescente(int vetor1[], int vetorCre[]){
	int temp1;
	
	for(int i=0; i<10; i++){
		vetorCre[i] = vetor1[i];
	}
	
	for(int i = 0; i<10; i++){
		for(int j=0; j<10; j++){
			if(vetorCre[j] > vetorCre[j+1]){
				temp1 = vetorCre[j];
				vetorCre[j] = vetorCre[j+1];
				vetorCre[j+1] = temp1;
			}
		}
	}
	
	return vetorCre;
	
}

int *decrescente(int vetor1[], int vetorDec[]){
	int temp2;
	
	for(int i=0; i<10; i++){
		vetorDec[i] = vetor1[i];
	}
		
	for(int i = 0; i<10 - 1; i++){
		for(int j=0; j<10-i-1; j++){
			if(vetorDec[j] < vetorDec[j+1]){
				temp2 = vetorDec[j];
				vetorDec[j] = vetorDec[j+1];
				vetorDec[j+1] = temp2;
			}
		}
	}
	
	return vetorDec;
	
}
	

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[10],vetorCre[10], vetorDec[10], aux=1, aux2;
	
	// informar os numeros que estarão no vetor
	do{
		cout << "Informe o valor do "<< aux << "º item do vetor!" << endl;
		cin >> vetor1[aux-1];
		
		aux++;
	}while(aux<=10);
	
	do{
		cout << "Você deseja organizar os vetores de forma:" << endl;
		cout << "1 - Crescente" << endl;
		cout << "2 - Decrescente" << endl;
		cin >> aux2;
		
	}while(aux2 <1 || aux2 > 2);
	
	cout << "Vetor Original = [";
	for(int i = 0; i<10; i++){
		cout << vetor1[i] << "-";
	}
	cout << "]"<< endl;
	
	switch(aux2){
		case (1):
			crescente(vetor1, vetorCre);
			cout << "Vetor organizado de forma crescente = [";
			for(int i=0; i<10; i++){
				cout << vetorCre[i]<< "-";	
			}
			cout << "]";
			break;
		
		case (2):
			decrescente(vetor1, vetorDec);
			cout << "Vetor organizado de forma decrescente = [";
			for(int i=0; i<10; i++){
				cout << vetorDec[i]<< "-";
			}
			cout << "]";
			break;
	}
	
}
