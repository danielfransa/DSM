#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int a = 0;
	int b = 1;
	int soma;
		cout << a << " - " << b << " - ";
		
		soma = a + b;
		
		for(int i=0; i<20; i++){
			
			cout << soma << " - ";
			
			a = soma;
			soma = a + b;
			b = a; 
					
		}
	
	return 0;
}
