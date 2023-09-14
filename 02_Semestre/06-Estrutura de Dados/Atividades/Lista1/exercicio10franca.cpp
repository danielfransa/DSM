/*
Crie um programa que tenha uma função que receba um inteiro e verifique se é par,
impar ou número primo. As mensagens de “É par” ou “É impar”ou “É primo”devem ser 
exibidas na própria função, ou seja, a função em si não deve retornar nada.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
using namespace std;

void verificarNumero(int);

void verificarNumero(int num){
	
	int primo = 0;
	
	//verifica se é positivo ou negativo, apenas numeros positivos interiros são primos.
	if(num<0){
		//se for negativo já verifica se é par ou impar.
		if(num%2 == 0){
			cout << "É par." << endl;
		} else {
			cout << "É impar." << endl;
		}
	
	//se for positivo faz as verificações.	
	} else {
		if(num%2 == 0){
			//único número par primo é o 2.
			if(num == 2){
				cout << "É par e é Primo." << endl;
			} else{
				cout << "É par." << endl;	
			}
		//verifcação dos numeros impares se são primos.
		}else{
		//Se n tem um divisor maior do que a raiz de n, então também tem um divisor inferior a rair de n.
			for(int i=2; i<sqrt(num); i++){
				if(num%i == 0){
					primo++;
				}
			}
			if(primo == 0){
				cout << "É impar e é Primo." << endl;
			}else{
				cout << "É impar." << endl;
			}
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
    int num; 
            
    cout << "Digite um número para ser verificado:" << endl;
    cin >> num;
	
	verificarNumero(num);	

}
