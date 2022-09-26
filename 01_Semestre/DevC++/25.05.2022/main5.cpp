#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int a[20], b[20], x;
	
						
		for (int i=0; i<=19; i++){
			cout << "Informe o " << i+1 <<   "º  número da sequência: " << endl;
			cin >> a[i];
			
		}
		for (int i=19; i>=0; i--){
		    b[x] = a[i];
			x += 1;  
			
		}
		
				
		for (int i=0; i<=19; i++)
			cout << b[i] << "-";
			
		cout << endl;
			
		for (int i=0; i<=19; i++)
			cout << a[i] << "-";

				
	return 0;
}
