/*
Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � par,
impar ou n�mero primo. As mensagens de �� par� ou �� impar�ou �� primo�devem ser 
exibidas na pr�pria fun��o, ou seja, a fun��o em si n�o deve retornar nada.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
using namespace std;

void verificarNumero(int);

void verificarNumero(int num){
	
	int primo = 0;
	
	//verifica se � positivo ou negativo, apenas numeros positivos interiros s�o primos.
	if(num<0){
		//se for negativo j� verifica se � par ou impar.
		if(num%2 == 0){
			cout << "� par." << endl;
		} else {
			cout << "� impar." << endl;
		}
	
	//se for positivo faz as verifica��es.	
	} else {
		if(num%2 == 0){
			//�nico n�mero par primo � o 2.
			if(num == 2){
				cout << "� par e � Primo." << endl;
			} else{
				cout << "� par." << endl;	
			}
		//verifca��o dos numeros impares se s�o primos.
		}else{
		//Se n tem um divisor maior do que a raiz de n, ent�o tamb�m tem um divisor inferior a rair de n.
			for(int i=2; i<sqrt(num); i++){
				if(num%i == 0){
					primo++;
				}
			}
			if(primo == 0){
				cout << "� impar e � Primo." << endl;
			}else{
				cout << "� impar." << endl;
			}
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
    int num; 
            
    cout << "Digite um n�mero para ser verificado:" << endl;
    cin >> num;
	
	verificarNumero(num);	

}
