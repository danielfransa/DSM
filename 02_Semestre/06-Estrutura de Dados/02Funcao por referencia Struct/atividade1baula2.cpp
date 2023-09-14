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

void quadradoPorValor(int);
void quadradoPorReferencia(int *);

void quadradoPorValor(int a){
	
		int aux;
		
		a = pow(a,2);
		cout << "Valor de \"a\" na fun��o: " << a << endl;	
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
	cout << "Quadrado por refer�ncia: " << a << endl;
	
	
	
	
	return 0;
}
