/*
 Escreva um programa (no formato de menu e usando fun��es) que controle a pista de voo. 
 Neste programa, o usu�rio deve ser capaz de realizar as seguintes tarefas:
 a. Adicionar um avi�o � fila de espera;
 b. Remover um avi�o da fila de espera;
 c. Listar o n�mero de avi�es aguardando na fila de decolagem;
 d. Modelo do avi�o que possui o maior tempo de voo com tanque de combust�vel cheio.
 e. Exibir as caracter�sticas do avi�o que tem a maior capacidade de passageiros.
 f. Listar as caracter�sticas do primeiro avi�o da fila.
 Considere  que  os  avi�es  possuem  um  n�mero  inteiro  como  identificador,  um  modelo(char), 
 capacidade  de passageiros e tempo de voo com tanque de combust�vel cheio.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "fila_struct.h"
using namespace std;

elem aviao;
Fila Fila1;
bool erro;
int maior = -99999;
int indice, aux;

void inserirAviao();
void removeAviaoFila();
void imprimir();
void modeloTempoVoo();
void capacidadePassageiro();
void primeiroFila();


void inserirAviao(){
	cout << "Qual o identificador do Avi�o? " << endl;
	cin >> aviao.id;
	
	cout << "Qual o Modelo do Avi�o? " << endl;
	cin >> aviao.model;
	
	cout << "Qual a capacidade de Passageiros? " << endl;
	cin >> aviao.passagerCapacity;
	
	cout << "Qual o Tempo de voo com tanque cheio? " << endl;
	cin >> aviao.timeFlyGasFull;
		
	Enter(&Fila1, &aviao, &erro);
	
	cout << "Aviao entrou na Fila" << endl;
	
}

void removeAviaoFila(){
	Out(&Fila1, &erro);
	
	cout << "Avi�o Retirado da Fila" << endl;
	
}

void imprimir(){
	
	Print(&Fila1);
	
}

void modeloTempoVoo(){
	
	for(int i= Fila1.inicio; i<Fila1.fim; i++){
		if(Fila1.itens[i].timeFlyGasFull > maior){
			maior = Fila1.itens[i].timeFlyGasFull;
			indice = i;
		}
	}
	
	cout << "O modelo que possui o maior tempo de voo com tanque cheio �: " << endl;
	cout << "Modelo: " << Fila1.itens[indice].model << endl;
		
}

void capacidadePassageiro(){
	
	for(int i= Fila1.inicio; i<Fila1.fim; i++){
		if(Fila1.itens[i].timeFlyGasFull > maior){
			maior = Fila1.itens[i].timeFlyGasFull;
			indice = i;
		}
	}
	
	cout << "Avi�o que possui a maior capacidade de passageiro tem as seguintes caracter�sticas: " << endl;
	cout << "Posi��o na Fila: " << indice+1 << endl;
	cout << "Id: " << Fila1.itens[indice].id << endl;
	cout << "Modelo: " << Fila1.itens[indice].model << endl;
	cout << "Capacidade de Passageiros: " << Fila1.itens[indice].passagerCapacity << endl;
	cout << "Tempo de Voo com tanque cheio: " << Fila1.itens[indice].timeFlyGasFull << endl;
	
}

void primeiroFila(){
		
	cout << "Avi�o em primeiro na fila: " << endl;
	cout << "Id: " << Fila1.itens[0].id << endl;
	cout << "Modelo: " << Fila1.itens[0].model << endl;
	cout << "Capacidade de Passageiros: " << Fila1.itens[0].passagerCapacity << endl;
	cout << "Tempo de Voo com tanque cheio: " << Fila1.itens[0].timeFlyGasFull << endl;
	
}






int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Create(&Fila1);
	
	
	do{
		cout << endl;
		cout << "------------MENU------------" << endl;
		cout << "1 - Incluir avi�o na lista:" << endl;
		cout << "2 - Remover avi�o da lista:" << endl;
		cout << "3 - Listar avi�es na lista:" << endl;
		cout << "4 - Modelo que possui o maior tempo de voo com tanque cheio:" << endl;
		cout << "5 - Exibir caracter�sticas do avi�o com maior capacidade de passageiros:" << endl;
		cout << "6 - Listar caracter�sticas do 1� avi�o da lista:" << endl;
		cout << "7 - Sair: " << endl;
		cin >> aux;
		
		switch(aux){
			case 1:
				inserirAviao();
				break;
			case 2:
				removeAviaoFila();
				break;
			case 3:
				imprimir();
				break;
			case 4:
				modeloTempoVoo();
				break;
			case 5:
				capacidadePassageiro();
				break;
			case 6:
				primeiroFila();
				break;
			case 7:
				cout << "Obrigado por utilizar nosso programa!"	<< endl;
				break;
			default:
				cout << "Op��o inv�lida!" << endl;
		}
	}while(aux != 7);	
	
	return 0;
}

