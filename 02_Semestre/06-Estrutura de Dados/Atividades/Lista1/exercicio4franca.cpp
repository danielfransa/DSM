/*Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM" e 0  se a string 
digitado foi "NAO". A rotina/fun��o s� deve retornar alguma coisa se a string digitado for "SIM" ou "NAO".Fa�a a 
verifica��o para que o usu�rio n�o estrague o seu c�digo.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;



int main() {
    string palavra;  // Declara��o da String
    int n, soma1 = 0, soma2 = 0;
    char comparacao1[] = {"SIM"};
	char comparacao2[] = {"NAO"};
	
    
	cout << "Digite uma palavra!!!" << endl;
	cin >> palavra;
	n = palavra.length(); // varavel com tamanho do string palavra 	

	//so entra na compara��o se a palavra digitada foi de 3 caracteres    
	if(n == 3){
		// Compara��o da palavra SIM, com case sensitive.
		for (int i = 0; i < n; i++){
        	if(palavra[i] == comparacao1[i]){
        		soma1++;
			}
		}
		// Compara��o da palavra NAO, com case sensitive.
		for (int i = 0; i < n; i++){
        	if(palavra[i] == comparacao2[i]){
        		soma2++;
			}
		}
	}
	
	//Resposta para compara��o de SIM.
	if(soma1 == 3){
		cout << "1" << endl;
	}
	//Resposta para compara��o de NAO.
	if(soma2 == 3){
		cout << "0" << endl;
	}
	
    	
}
