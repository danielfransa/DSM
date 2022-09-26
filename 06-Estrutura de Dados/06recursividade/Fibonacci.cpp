#include <iostream>
using namespace std;
int n, aux;

	int fib(int n){
		if( n < 2){
			aux = n;
		}else{
		  aux = fib(n-1)+fib(n-2);	
		}
		cout << aux << endl;
		return aux;
	}
	
int main(int argc, char** argv) {
	
	int ult, pen, aux;
	ult = 1;
	pen = 0;
	/*
	for(int i=0; i<10; i++){
		cout << ult << " - ";
		aux = ult;
		ult = pen + ult;
		pen = aux;
	
	}
	*/

	n=10;
	
	cout <<	fib(n);
		
	
	return 0;
}
