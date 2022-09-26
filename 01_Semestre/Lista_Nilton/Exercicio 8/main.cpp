#include <iostream>
using namespace std;


int main() {
	setlocale (LC_ALL, "Portuguese");
	
		double a=1;
		double b;
		
		for(int i=0; i<64; i++){
			cout << a << " - Valor na " << i+1 <<"º casa" << endl;
			a = a * 2;
			b = b + a;
		}
		
			cout << "Soma geral: " << b;
		
	return 0;
}
