#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
int n=10, x, c=0;
int a[10];
int i=0;

int funcao1(int a[], int n, int x);

int funcao1(int a[], int n, int x){

		if(i< n){
			if(a[i] == x){
				return i;
				c++;
			}else{
				i++;
				funcao1(a, n, x);
			}
		}else if(c == 0){
			return -1;
		}
		
		
}


int main() {
	
	for(int i=0; i<n; i++){
		cout << "Digite o " << i+1 << "º número do vetor:"<< endl;
		cin >> a[i];
	}
	
	cout << "Indique qual o número deseja encontrar:" << endl;
	cin >> x;
	
	cout << "Indice: " << funcao1(a, n, x);	
	
	return 0;
}
