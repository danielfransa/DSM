/*
14. Fa�a um programa que inverte uma string usando recurs�o.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <locale>
#include <cstdlib>
using namespace std;
string str;
int aux;

void reverse(string str, int aux){
	
		if(aux != 0){
			cout << str[aux-1];
			aux--;
			reverse(str, aux);
		}
	
}



int main() {
	
	cout << "Insira uma palavra: " << endl;
	cin >> str;
	
	aux = str.size();
	
	reverse(str, aux);
	
	return 0;
}
