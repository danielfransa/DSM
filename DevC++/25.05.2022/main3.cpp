#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int a[8] = {5,8,9,7,6,4,1,3}, num;
	bool existe = false;
	
		cout << "Informe um número: " << endl;
		cin >> num;
		
		for(int i=0; i<=7; i++){
			if(a[i] == num){
				cout << "Seu número esta no indice: " << i << endl;
				existe = true;
				break;
			}
				
		}
		if(!existe){
			cout << "Seu número não esta no vetor. " << endl;	
		}
		
	return 0;
}
