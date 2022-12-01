#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int n=10, x, maior=-99999;
int a[10];
int i=0;

int funcao1(int a[], int n);

int funcao1(int a[], int n){

		if(i< n){
			if(a[i]>maior)
			maior = a[i];
			i++;
			funcao1(a, n);
		}
		
		return maior;
		
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0; i<n; i++){
		cout << "Digite o " << i+1 << "º número do vetor:"<< endl;
		cin >> a[i];
	}
	
	cout << "O Maior Número é: " << funcao1(a, n);	
	
	return 0;
}
