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

void quadradoPorValor(int);
void quadradoPorReferencia(int *);

void quadradoPorValor(int a){
	
		int aux;
		
		a = pow(a,2);
		cout << "Valor de \"a\" na função: " << a << endl;	
	//return aux;
	
}

	
void quadradoPorReferencia(int *a){
	
		int aux;
		
		
		*a = pow(*a,2);

}
	

main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	a = 4;
	
		
	quadradoPorValor(a);
	cout << "Quadrado por valor: " << a << endl;
	
	quadradoPorReferencia(&a);
	cout << "Quadrado por referência: " << a << endl;
	
	
	
	
	return 0;
}
