#include <iostream>
using namespace std;


int main() {
	setlocale (LC_ALL, "Portuguese");
	
		float a=1;
		
		for(int i=0; i<64; i++){
			cout << a << " - Valor na " << i+1 <<"º casa" << endl;
			a = a * 2;
		}
		
	return 0;
}
