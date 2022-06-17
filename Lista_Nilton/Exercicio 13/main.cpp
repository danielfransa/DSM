#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

double volumeEsfera(double r){
		
		double volume;
		double pi = 3.1416;
		
		// formula verificada pelo site calcularvolume.com		
		volume = ((4*pi)*pow(r,3)) / 3;
				
		return volume;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double r;
	
	cout << "Insira o raio da Esfera em centimetros:" << endl;
	cin >> r;
	
	cout << "O volume da esfera é: " << volumeEsfera(r) << " cm³"<< endl;
	
	return 0;
}
