/*
Fun��o 					Descri��o do comando
floor( ) 					arredonda para baixo
ceil( ) 					arredonda para cima
sqrt( ) 					Calcula raiz quadrada
pow(vari�vel, expoente) 	potencia��o

Com base nas fun��es matem�ticas crie um programa que 
utiliza uma fun��o que recebe um numero e retorna o 
quadrado desse valor. Fa�a duas fun�oes uma utilizando
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
	cout << "Quadrado por refer�ncia: " << quadradoPorReferencia(&a) << endl;
	
	
	
	
	return 0;
}
