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
	
	
	cout << "O Vertor A contém os seguintes números: ";
	for(int i=0; i<5; i++){
		cout << a[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor B contém os seguintes números: ";
	for(int i=0; i<5; i++){
		cout << b[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor C que é a soma dos Vetores A e B contém os seguintes números: ";
	for(int i=0; i<5; i++){
			c[i] = a[i] + b[i];
		cout << c[i] << " | ";
	}
	
	cout << endl;
	
		cout << "O Vertor D que é a subtração dos Vetores B de A contém os seguintes números: ";
	for(int i=0; i<5; i++){
			d[i] = b[i] - a[i];
		cout << d[i] << " | ";
	}
	
	cout << endl;
	
		
	for(int i=0; i<5; i++){
			e += a[i] * b[i];
		
	}
	cout << "O Produto escalar dos vertores A e B são: " << e;
	
	return 0;
}
