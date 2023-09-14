/*
Função 					Descrição do comando
floor( ) 					arredonda para baixo
ceil( ) 					arredonda para cima
sqrt( ) 					Calcula raiz quadrada
pow(variável, expoente) 	potenciação

Com base nas funções matemáticas crie um programa que 
utiliza uma função que recebe um numero e retorna o 
quadrado desse valor. Faça duas funçoes uma utilizando
passagem de parametro por valor e outra por referencia. 
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int quadradoPorValor(int);
int quadradoPorReferencia(int *);

quadradoPorValor(int a){
	
		int aux;
		
		aux = pow(a,2);
	
	return aux;
	
}

	
quadradoPorReferencia(int *a){
	
		int aux;
		*a = 2;
		
		aux = pow(*a,2);
	
	return aux;
}
	

main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	a = 4;
	
	
	cout << "Quadrado por valor: " << quadradoPorValor(a) << endl;
	cout << "Quadrado por referência: " << quadradoPorReferencia(&a) << endl;
	
	
	
	
	return 0;
}
