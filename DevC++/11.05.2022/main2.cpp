#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL,"Portuguese");
	
int n1, n2, c;

	cout << "Informe o 1º número:" << endl;
	cin >> n1;
	cout << "Informe o 2º número:" << endl;
	cin >> n2;
	
		if (n1 > n2) {
			c = n1;
			n1 = n2;
			n2 = c;
		}

	for(int v=n1; v <=n2; v++){
		 cout << v << " / ";
	}
	
	return 0;

}
