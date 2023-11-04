#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha1, escolha2;  
	
		cout << "------- Menu ------- " << endl;
		cout << "1- Spock " << endl;
		cout << "2- Tesoura " << endl;
		cout << "3- Papel " << endl;
		cout << "4- Pedra " << endl;
		cout << "5- Lagarto " << endl;
		cout << "Escolha 1º número  " << endl;
		cin >> escolha1;
		
		cout<<endl;
		
		cout << "------- Menu ------- " << endl;
		cout << "1- Spock " << endl;
		cout << "2- Tesoura " << endl;
		cout << "3- Papel " << endl;
		cout << "4- Pedra " << endl;
		cout << "5- Lagarto " << endl;
		cout << "Escolha 2º número  " << endl;
		cin >> escolha2;
		
		if(escolha1 == escolha2){
			cout << "Empate" << endl;
		}else if(escolha1 == 1 && escolha2 == 2){
			cout << "Spock Esmaga Tesoura!"<<endl;
		}else if(escolha1 == 1 && escolha2 == 4){
			cout << "Spock Vaporiza Pedra!"<<endl;
		}else if(escolha1 == 1 && escolha2 == 3){
			cout << "Papel Desaprova Spock"<<endl;
		}else if(escolha1 == 1 && escolha2 == 5){
			cout << "Lagarto Envenena Spock!"<<endl;
		}else if(escolha1 == 2 && escolha2 == 3){
			cout << "Tesoura Corta Papel!"<<endl;
		}else if(escolha1 == 2 && escolha2 == 5){
			cout << "Tesoura Decapta Lagarto!"<<endl;
		}else if(escolha1 == 2 && escolha2 == 1){
			cout << "Spock Esmaga Tesoura!"<<endl;
		}else if(escolha1 == 2 && escolha2 == 4){
			cout << "Pedra Quebra Tesoura!"<<endl;
		}else if(escolha1 == 3 && escolha2 == 1){
			cout << "Papel Desaprova Spock!"<<endl;
		}else if(escolha1 == 3 && escolha2 == 4){
			cout << "Papel Cobre Pedra!"<<endl;
		}else if(escolha1 == 3 && escolha2 == 2){
			cout << "Tesoura Corta Papel!"<<endl;
		}else if(escolha1 == 3 && escolha2 == 5){
			cout << "Lagarto Come Papel!"<<endl;
		}else if(escolha1 == 4 && escolha2 == 2){
			cout << "Pedra Quebra Tesoura!"<<endl;
		}else if(escolha1 == 4 && escolha2 == 5){
			cout << "Pedra Esmaga Lagarto!"<<endl;
		}else if(escolha1 == 4 && escolha2 == 1){
			cout << "Spock Vaporiza Pedra!"<<endl;
		}else if(escolha1 == 4 && escolha2 == 3){
			cout << "Papel Cobre Pedra!"<<endl;
		}else if(escolha1 == 5 && escolha2 == 1){
			cout << "Lagarto Envenena Spock!"<<endl;
		}else if(escolha1 == 5 && escolha2 == 3){
			cout << "Lagarto Come Papel!"<<endl;
		}else if(escolha1 == 5 && escolha2 == 2){
			cout << "Tesoura Decapta Lagarto!"<<endl;
		}else if(escolha1 == 5 && escolha2 == 4){
			cout << "Pedra Esmaga Lagarto!"<<endl;
		}
		
		
	
	return 0;
}
