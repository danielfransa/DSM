#include <iostream>
using namespace std;


int main() {
		setlocale(LC_ALL,"Portuguese");
		
		int vetor[4], soma;
		
		
		for(int i=0; i <=3; i++ ){
			cout << "Informe o " << i+1 <<"�  valor: " << endl;
			cin >> vetor[i];
			soma += vetor[i];
		}
		
		cout << "Soma �: " << soma << endl;
	return 0;
}
