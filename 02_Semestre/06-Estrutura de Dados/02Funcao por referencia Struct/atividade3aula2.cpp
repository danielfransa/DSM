/*
A delega��o francesa de Futsal deseja criar um programa que deva conter o nome do atleta, 
sua posi��o, idade e altura. Crie uma estrutura representando um atleta. Agora, escreva 
um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais
alto e do mais velho.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <string>
using namespace std;


struct atletas{
	string nome; 
	string posicao;
	int idade;
	float altura;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	atletas atleta[5];
	
	int velho = 0, auxVelho;
	float alto =0, auxAlto;
	
	//Recebe os nomes
	for(int i=0; i<5; i++){	
		cout << "Digite o nome do " << i+1 << "� atleta" <<endl;
		cin >> atleta[i].nome;
		//atleta[i].posicao;
		//atleta[i].idade;
		//atleta[i].altura;	
	}
	
	//Recebe a Posi��o
	for(int i=0; i<5; i++){	
		cout << "Digite a posi��o do " << i+1 << "� atleta" <<endl;
		cin >> atleta[i].posicao;
	}
	
	//Recebe a Iltura
	for(int i=0; i<5; i++){	
		cout << "Digite a idade do " << i+1 << "� atleta" <<endl;
		cin >> atleta[i].idade;
	}
	
	//Recebe a Altura
	for(int i=0; i<5; i++){	
		cout << "Digite a altura do " << i+1 << "� atleta" <<endl;
		cin >> atleta[i].altura;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	//verificar o mais velho
	for(int i=0; i<5; i++){
		if (velho < atleta[i].idade){
			velho = atleta[i].idade;
			auxVelho = i;
		}
	}
	
	//cout << auxVelho << endl;
	
	for(int i=auxVelho; i<=auxVelho; i++){	
		cout << "Nome do atleta mais velho �:" << endl;
		cout << atleta[i].nome << endl;
		//cout << "Posi��o do atleta mais velho �:" << endl;
		//cout << atleta[i].posicao << endl;
		//cout << "Idade do atleta mais velho �:" << endl;
		//cout << atleta[i].idade<< endl;
		//cout << "Altura do atleta mais velho �:" << endl;
		//cout << atleta[i].altura << endl;
	}
	
	// Verifica atleta mais alto	
	for(int i=0; i<5; i++){
		if (alto < atleta[i].altura){
			alto = atleta[i].altura;
			auxAlto = i;
		}
	}
	
	//cout << auxAlto << endl;
	
	for(int i=auxAlto; i<=auxAlto; i++){	
		cout << "Nome do atleta mais alto �:" << endl;
		cout << atleta[i].nome << endl;
		//cout << "Posi��o do atleta mais alto �:" << endl;
		//cout << atleta[i].posicao << endl;
		//cout << "Idade do atleta mais alto �:" << endl;
		//cout << atleta[i].idade<< endl;
		//cout << "Altura do atleta mais alto �:" << endl;
		//cout << atleta[i].altura << endl;
	}
	
	

/*
	for(int i=0; i<5; i++){	
		cout << "Nome do " << i+1 << "� atleta" <<endl;
		cout << atleta[i].nome << endl;
		cout << "Posi��o " << i+1 << "� atleta" <<endl;
		cout << atleta[i].posicao << endl;
		cout << "Idade do " << i+1 << "� atleta" <<endl;
		cout << atleta[i].idade<< endl;
		cout << "Altura do " << i+1 << "� atleta" <<endl;
		cout << atleta[i].altura << endl;
	}
	
*/	
	
	
	return 0;
}
