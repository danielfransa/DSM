/*Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM" e 0  se a string 
digitado foi "NAO". A rotina/função só deve retornar alguma coisa se a string digitado for "SIM" ou "NAO".Faça a 
verificação para que o usuário não estrague o seu código.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;



int main() {
    string palavra;  // Declaração da String
    int n, soma1 = 0, soma2 = 0;
    char comparacao1[] = {"SIM"};
	char comparacao2[] = {"NAO"};
	
    
	cout << "Digite uma palavra!!!" << endl;
	cin >> palavra;
	n = palavra.length(); // varavel com tamanho do string palavra 	

	//so entra na comparação se a palavra digitada foi de 3 caracteres    
	if(n == 3){
		// Comparação da palavra SIM, com case sensitive.
		for (int i = 0; i < n; i++){
        	if(palavra[i] == comparacao1[i]){
        		soma1++;
			}
		}
		// Comparação da palavra NAO, com case sensitive.
		for (int i = 0; i < n; i++){
        	if(palavra[i] == comparacao2[i]){
        		soma2++;
			}
		}
	}
	
	//Resposta para comparação de SIM.
	if(soma1 == 3){
		cout << "1" << endl;
	}
	//Resposta para comparação de NAO.
	if(soma2 == 3){
		cout << "0" << endl;
	}
	
    	
}
