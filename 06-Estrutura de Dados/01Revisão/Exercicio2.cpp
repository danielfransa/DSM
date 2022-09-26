/*
Criar um programa que receba do usuário os dados para preencher dois vetores de inteiros de 5 elementos cada.
Passar os dois vetores para uma função e calcular a somna dos vetores com os respectivos indices(1:1, 2:2 ... 5:5).
A função vai retornar o terceiro vetor para exibir na Main.
*/

#include <iostream>#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
	

	
//cabecçalho
int *soma_vetor(int, int, int);

//função que soma os vetores
int *soma_vetor(int vetorA[], int vetorB[], int vetorC[]){
	
	for(int i=0; i<5; i++){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
		
	return vetorC;	
	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	// variaveis
	int vetorA[5];
	int vetorB[5];
	int vetorC[5];	

	
	//receber dados do vetorA
	for(int i=0; i<5; i++){
		cout << "Insira "<< i+1 <<"º valor para o vetor A!"<< endl;
		cin >> vetorA[i];	
			
	}
	
	//receber dados do vetorB	
	for(int i=0; i<5; i++){
		cout << "Insira "<< i+1 <<"º valor para o vetor B!"<< endl;
		cin >> vetorB[i];	
			
	}
	
	
	//chamada da função soma
	soma_vetor(vetorA, vetorB, vetorC);
	
	//apenas para pular uma linha na resposta.
	cout << endl;
	
	//imprimir o resultado.
	cout << "VetorC = [";
	for(int i=0; i<5; i++){
		cout << vetorC[i]<< ", ";
				
	}
	cout << "]";
	
}
