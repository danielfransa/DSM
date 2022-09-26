#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int qdt_cavalos = 0;
	
	cout << "Informe e quantidade de Cavalos comprados para o Haras" << endl;
	cin >> qdt_cavalos;
	
	cout << "Será necessário comprar " << qdt_cavalos*4 << " ferraduras para equipar todos os cavalos.";
	
	return 0;
}
