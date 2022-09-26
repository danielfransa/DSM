/*
Crie um jogo onde o computador sorteia um número de 1 até 10, e você tenta adivinhar qual é o número. 
Porém esse número está vinculado a um nome, portanto use struct. Use uma função que faça esse sorteio aleatório, 
recebendo a struct como parâmetro e retorne o número sorteado. Na main, exiba esse número sorteado e o nome da 
pessoa sorteada. Procure na internet por Rand, Srand e Random.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>
using namespace std;

struct SORTEIO{
	int num;
	string nome;
};

int num, aux, userNum, op;

int sortearNumero();

int sortearNumero(){
	
	srand(time(0));
	
	num = 1+rand() % 10;
	
	return num;
	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	SORTEIO sorteio[10];
	
	sorteio[0].nome = "Daniel";
	sorteio[0].num = 1;
	sorteio[1].nome = "João";
	sorteio[1].num = 2;
	sorteio[2].nome = "Marcos";
	sorteio[2].num = 3;
	sorteio[3].nome = "Carlos";
	sorteio[3].num = 4;
	sorteio[4].nome = "Jean";
	sorteio[4].num = 5;
	sorteio[5].nome = "Maria";
	sorteio[5].num = 6;
	sorteio[6].nome = "Josefa";
	sorteio[6].num = 7;
	sorteio[7].nome = "Bruna";
	sorteio[7].num = 8;
	sorteio[8].nome = "Lorena";
	sorteio[8].num = 9;
	sorteio[9].nome = "Cecilia";
	sorteio[9].num = 10;
	
	
	
	do{
		cout << "Chute um número de 1 à 10: " << endl;
		cin >> userNum;
		
		//cout << userNum << endl;
		//chama a função que sorteia o número
		sortearNumero();
		
		//cout << num << endl;
		//pega o indice do numero sorteado
		for(int i=0; i<10; i++){
			if(num == sorteio[i].num){
				aux = i;
			}
		}
		//faz a conferencia se acertou ou não.
		if(userNum == num){
			cout << "Parabéns, você acertou o número sorteado!!!" << endl;
			cout << "O número Sorteado foi: " << sorteio[aux].num << endl;
			cout << "O nome vinculado a esse número é: " << sorteio[aux].nome << endl;
		}else{
			cout << "Você errou!!!" << endl;
			cout << "Número Sorteado: " << num << endl;
		}		
		
		cout << "Para Jogar novamente digite 1: " << endl;
		cin >> op;
		cout << op << endl;
	}while(op == 1);
	
		

	
	
	return 0;
}
