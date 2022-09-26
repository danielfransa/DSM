#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

	float nota [3], media;
	int aluno;
	
	while (aluno <= 10){
		
		for (aluno=1; aluno<11; aluno++){
					
			cout << "Informe a 1º nota do aluno: " << aluno << endl;
			cin >> nota[0];
	
			cout << "Informe a 2º nota do aluno: " << aluno << endl;
			cin >> nota[1];
	
			cout << "Informe a 3º nota do aluno: " << aluno << endl;
			cin >> nota[2];
	
			media = (nota[0] + nota[1] + nota[2]) / 3;
	
			cout << "A média do aluno: " << aluno << " é: " << media << endl << endl;
			cout << "------------------------------------- \n\n";
		}
	}
		
	return 0;
}
