/*
Crie um programa que popule um vetor de 10 valores float, passados pelo usuário.
Dentro de uma função, sem ordenar, procure pelo maior e menor valor e exiba-os na tela.
A função deve receber esse vetor e retornar o maior e menor valor para serem exibidos na tela.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

float maiorValor(float);
float menorValor(float);


float maiorValor(float vetor[]){
		
		float maior;
				
		for(int i=0; i<10; i++){
			if(vetor[i] > maior){
				maior = vetor[i];
			}	
		}
	return maior;	
}

float menorValor(float vetor[]){
		float menor;
		
		for(int i=0; i<10; i++){
			if(vetor[i] < menor){
				menor = vetor[i];
			}	
		}
	return menor;
}


main() {
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[10];
	int aux = 1;
	
	do{
		cout << "Informe o valor do "<< aux << "º item do vetor!" << endl;
		cin >> vetor[aux-1];
		
		aux++;
	}while(aux<=10);
	
	
	
	cout << "Menor valor = " << menorValor(vetor)<< endl;
	cout << "Maior valor = " << maiorValor(vetor) << endl;
	
}
