#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int a[5] = {20, 40, 50, 80, 100};
	int b[5] = {23, 54, 254, 786, 942};
	int c[5];
	int d[5];
	int e;
	
	
	cout << "O Vertor A cont�m os seguintes n�meros: ";
	for(int i=0; i<5; i++){
		cout << a[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor B cont�m os seguintes n�meros: ";
	for(int i=0; i<5; i++){
		cout << b[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor C que � a soma dos Vetores A e B cont�m os seguintes n�meros: ";
	for(int i=0; i<5; i++){
			c[i] = a[i] + b[i];
		cout << c[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor D que � a subtra��o dos Vetores B de A cont�m os seguintes n�meros: ";
	for(int i=0; i<5; i++){
			d[i] = b[i] - a[i];
		cout << d[i] << " | ";
	}
	
	cout << endl;
	
		
	for(int i=0; i<5; i++){
			e += a[i] * b[i];
		
	}
	cout << "O Produto escalar dos vertores A e B s�o: " << e;
	
	return 0;
}
