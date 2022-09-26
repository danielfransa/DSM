#include <iostream>
#include<math.h>
using namespace std;


//Criando uma função fatorial
void fatorial(int n){
	int fat=1;
	for(int i=1; i<=n; i++){
		fat = fat * i;
	}
	cout << "O fatorial de " << n << " é " << fat;
}

float raiz (int n){
	return sqrt(n);
} 


bool validausuario(string login, string senha){
	string user="admin", password="admin123";
	
		if (login == user && senha == password){
			return true;
		} else{
			return false;
		
		}
}


int main() {
	int n = 0;
	float r;
	string u, s;
		
	cout << "Informe o usuário \n";
	cin >> u;
	cout << "Informe o senha \n";
	cin >> s;
	
	
	if (validausuario(u, s)==true){
	
		cout << "Informe o número: \n";
		cin >> n;
	
		fatorial(n);
	
		cout << "\n A raiz é " << raiz(n);
		//também podemos guardar o valor
		//da função em uma variavel
		r = raiz(n);		
	}else{
			cout << "Login ou Senha inválida!";
	}
	
	return 0;
}
