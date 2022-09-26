
/*
Fazer um programaque imprime,em formato detabela,a tabuada de 1 a 9.Use “\n”e “\t”para te ajudar na exposição dos números na tela.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

main() {
	
	for(int i=1; i<=9; i++){  // for para a tabuada
		cout << endl; // pular uma linha entre uma tabuada e outra "só pra ficar mais bonitinho"
		cout << "Tabuada do " << i << endl; 
		cout <<"---------------------------------" << endl;
		for(int j=1; j<=10; j++){ // for para o mutiplicador
			cout <<"|   " << j << "\t" <<  " |"<< " x " <<"|   " << i << "   | " << "=" << " |   "<< i*j << "\t" <<" |" << endl;
			cout <<"---------------------------------" << endl;
		}
	}
	
	
}
