#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int a[5];
	
						
		for (int i=0; i<=4; i++){
			cout << "Informe o " << i+1 <<   "�  n�mero da sequ�ncia: " << endl;
			cin >> a[i];
			
		}
		for (int i=4; i>=0; i--)
			cout << a[i] << "-";
		
	return 0;
}
