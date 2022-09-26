#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, menor;
	
	cout << "Insira quantos elementos terá o vetor" << endl;
	cin >> n;
	
	int a[n];
	
	for(int i=0; i<n; i++){
		cout << "Insira o " << i+1 << "º número do vetor" << endl;
		cin >> a[i];
		
	}
	
		cout << "Vetor Original: ";
	for(int i=0; i<n; i++){
		cout << a[i] << "|";
	}

	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			menor = a[i];
			
			if(a[j]<a[i]){
				a[i] = a[j];
				a[j] = menor;
			}
		}
		
	}
	cout << endl;

		cout << "Vetor Organizado: ";
	for(int i=0; i<n; i++){
		cout << a[i] << "|";
	}
	
	return 0;
}
