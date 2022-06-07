#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int a[6], b[6], c[6];
	
		for (int i = 0; i<=5; i++){
			cout << "Informe o " << i+1 << "º número do vertor A" << endl;
			cin >> a[i];
		}
		
		for (int i = 0; i<=5; i++){
			cout << "Informe o " << i+1 << "º número do vertor B" << endl;
			cin >> b[i];
		}
		for (int i = 0; i<=5; i++){
			c[i] = a[i] + b[i];
			cout << c[i] << "-";
		}
		
	
	return 0;
}
