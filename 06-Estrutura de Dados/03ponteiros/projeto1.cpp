#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int *p, i=10, j;
	
		p=&i;
		
		
		cout << "Valor de P: " << p << endl;
		cout << "Valor de P: " << *p << endl;
	
	return 0;
}
