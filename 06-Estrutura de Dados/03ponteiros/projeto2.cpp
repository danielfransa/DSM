#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;

/*
 
*/

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int vetor[5];
	
	for(int i=0; i<5; i++){
		cout << "Informe o valor do " << i+1 <<"º dado do vetor" << endl;
		cin >> *(vetor+i);
		
	}
	
	//	for(int i=0; i<5; i++){
	//	cout << vetor[i] << endl;
	//}
	
	for(int i=0; i<5; i++){
		*(vetor+i) = *(vetor+i)*2;
	}
	
	for(int i=0; i<5; i++){
		cout << "Valor => " << *(vetor+i) << " Endereço => " << vetor+i << endl;
	}
		
	return 0;
}
