#include <iostream>
using namespace std;

int main() {
	
int fator1, resultado;

	cout << "Informe a Tabuada que deseja calcular:" << endl;
	cin >> fator1;

	for(int v=1; v <=10; v++){
		resultado = v * fator1;
		cout << v << " x " << fator1 << " = " << resultado << endl;
	}
	
	return 0;
}
