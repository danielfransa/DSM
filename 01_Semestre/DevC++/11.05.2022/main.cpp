#include <iostream>
using namespace std;

//Corrida de Autom�veis
int main() {

int tempo=0, soma=0, melhortempo=99999, piortempo=0, volta, n;
	float media=0;
	
	cout << "Informe a quantidade de voltas que a corrida ter�? \n ";
	cin >> n;

	for(int v=1; v <=n; v++){
		cout << "Informe o tempo da volta " << v << endl;
		cin >> tempo;
	
		soma = soma + tempo;
			
		if(tempo< melhortempo){
			melhortempo = tempo;
			volta = v;
		}	
	
		if (tempo > piortempo){
			piortempo = tempo;
		}
	}
	
	media = soma/10;
	
	cout << "Total dos tempos: " << soma << endl;
	cout << "M�dia dos tempos: " << media << endl;
	cout << "Melhor tempos: " << melhortempo << endl;
	cout << "Volta do melhor tempo: " << volta << endl;
	cout << "Pior tempos: " << piortempo;
	return 0;
}
