/*
Faça um programa que leia um vetor de inteiros do usuário, remova valores consecutivos repetidos e
mostra o vetor atualizado. O programa deve alocar memória para o vetor inicial e usar a função realloc
para ajustar o tamanho do vetor. O tamanho do vetor deve ser sempre o mínimo necessário para
armazenar os valores, ou seja, usar malloc de 1 em 1. O programa deve mostrar o tamanho final do vetor,
como no exemplo abaixo.

{0,0,1,1,1,2,2,3,0,3}  ---> {0,1,2,3,0,3}

*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <vector>

using namespace std;

int main() {
	
	int tam, count, aux;
	int *vetor, *vetor2;

	cout << "Qual o tamanho da matrix: " << endl;
		cin >> tam;
		
		vetor = (int*)malloc(tam*sizeof(int));
		
	for(int i=0; i<tam; i++){
		cout << "Insira o valor do " << i+1 << "º item do vetor." <<endl;
		cin >> vetor[i];
	}
	
	cout << "Vetor antes de corrigir:" << endl;
	for(int i=0; i<tam; i++){
		cout << vetor[i] << " - ";	
	}
	cout << endl;
	
	for(int i=0; i<tam-1; i++){
		if(vetor[i] == vetor[i+1]){
			vetor[i] = NULL;
			count++;
		}		
	}
	
	aux = tam - count;
	
	vetor2 = (int*)malloc(aux * sizeof(int));
	
	int count2=0;
	for(int i=0; i<tam; i++){
		if(vetor[i] != NULL ){
			vetor2[count2]=vetor[i];
			count2++;	
		}	
	}
	
	
	cout << "Vetor depois de corrigir:" << endl;
	for(int i=0; i<aux; i++){
		cout << vetor2[i] << " - ";	
	}
	cout << endl;

	return 0;
}
