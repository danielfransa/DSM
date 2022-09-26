/*
Crie um vetor de inteiros com alocação dinâmica. O tamanho do vetor e os valores
serão passaodos pelo usuário. Então, crie 2 funções recursivas:
- Uma que faça a soma de todos os elementos do vetor e retorne o valor total da soma.
Exiba esse valor na principal
- Outra que inverta os elemento do vetor e retorne o vetor (invertido) para o exibir na
principal
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int tam, *vetor = NULL, aux, troca, k;


int soma(int vetor);
int *inverteVetor(int vetor[], int ini, int fim);
int busca(int vetor, int tam, int k);


int soma(int tam, int vetor[]){
	if (tam == 1){
		aux = aux + vetor[tam-1];
		return aux;
	}else{
		aux = aux + vetor[tam-1];
		soma((tam-1), vetor);
	}
}

int *inverteVetor(int vetor[], int ini, int fim){
	if(ini == fim || ini > fim){
		return vetor;
	}else{
		troca = vetor[fim];
		vetor[fim] = vetor[ini];
		vetor[ini] = troca;
		inverteVetor(vetor, ini+1, fim-1);
	}
	
}

int busca(int vetor[], int tam, int k){
	if(vetor[tam-1] == k){
		return tam-1;
	}else if(tam-1 < 0){
		return -1;
	}else{
		busca(vetor, tam-1, k);
	}
}




int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	
	vetor = (int*)malloc(tam*sizeof(vetor));
	
	cout << "Insira o tamanho do vetor: " << endl;
	cin >> tam;
	
	for(int i=0; i<tam; i++){
		cout << "Digite o " << i+1 << "º valor" << endl;
		cin >> vetor[i];
	}
	
	cout << "Insira um número para encontrar: " << endl;
	cin >> k;
	
	
	
	if(busca(vetor, tam, k) == -1){
		cout << "Número não encontrado!" << endl;
	}else{
		cout << "Número encontrado no indice: " << busca(vetor, tam, k) << endl;
	}
	
	
/*	
//	for(int i=0; i<tam; i++){
//		cout << vetor[i] << endl;
//	}
	
	cout << "Soma: " << soma(tam, vetor) << endl;
	
	inverteVetor(vetor, 0, tam-1);
	
	for(int i=0; i<tam; i++){
		cout << vetor[i] << " - ";
	}
	
	
	
*/		
	
	return 0;
}
