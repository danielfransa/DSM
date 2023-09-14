/*
Procure a respeito das seguintes funções de manipulação de string:strcpy, strcmp, strcat, strlen  
e faça a programa a seguir utilizando essas funções: usuário vai passar nome e sobrenome para o 
programa(apenas duas palavras), que vai fazer as seguintes verificações: se  nome  for  maior que
sobrenome(usar strcmp) então imprimir concatenados o nome e depois o sobrenome. Caso contrário 
imprimir na tela o sobrenome e depois o nome. E se forem iguais colocar em uma terceira variável 
o nome e depois o sobrenome e exibir na tela também o tamanho (número de caracteres) da string total 
(nome completo do usuário).
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	string nome; 
	string sobrenome;
	
	int a, b, comparacao, tamanho;
	
	cout << "Digite seu nome." << endl;
	cin >> nome;
	cout << "Digite seu sobrenome (apenas o último)" << endl;
	cin >> sobrenome;
	
	
	a = strlen(nome.c_str());
	b = strlen(sobrenome.c_str());
	
	char nomeCompleto[a+b];
	
	if(a > b){
		cout << nome << sobrenome << endl;
	}else if(a < b){
		cout << sobrenome << nome << endl;
	}else if(a == b){
		strcat(nomeCompleto, nome.c_str());
		strcat(nomeCompleto, sobrenome.c_str());
		cout << nomeCompleto << " - O tamanho da string é de " << a+b << " caracteres" << endl;
	}
	

}
