/*
 Escreva um programa (no formato de menu e usando funções) que controle a pista de voo. 
 Neste programa, o usuário deve ser capaz de realizar as seguintes tarefas:
 a. Adicionar um avião à fila de espera;
 b. Remover um avião da fila de espera;
 c. Listar o número de aviões aguardando na fila de decolagem;
 d. Modelo do avião que possui o maior tempo de voo com tanque de combustível cheio.
 e. Exibir as características do avião que tem a maior capacidade de passageiros.
 f. Listar as características do primeiro avião da fila.
 Considere  que  os  aviões  possuem  um  número  inteiro  como  identificador,  um  modelo(char), 
 capacidade  de passageiros e tempo de voo com tanque de combustível cheio.
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
	cout << "Qual o identificador do Avião? " << endl;
	cin >> aviao.id;
	
	cout << "Qual o Modelo do Avião? " << endl;
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
	
	cout << "Avião Retirado da Fila" << endl;
	
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
	
	cout << "O modelo que possui o maior tempo de voo com tanque cheio é: " << endl;
	cout << "Modelo: " << Fila1.itens[indice].model << endl;
		
}

void capacidadePassageiro(){
	
	for(int i= Fila1.inicio; i<Fila1.fim; i++){
		if(Fila1.itens[i].timeFlyGasFull > maior){
			maior = Fila1.itens[i].timeFlyGasFull;
			indice = i;
		}
	}
	
	cout << "Avião que possui a maior capacidade de passageiro tem as seguintes características: " << endl;
	cout << "Posição na Fila: " << indice+1 << endl;
	cout << "Id: " << Fila1.itens[indice].id << endl;
	cout << "Modelo: " << Fila1.itens[indice].model << endl;
	cout << "Capacidade de Passageiros: " << Fila1.itens[indice].passagerCapacity << endl;
	cout << "Tempo de Voo com tanque cheio: " << Fila1.itens[indice].timeFlyGasFull << endl;
	
}

void primeiroFila(){
		
	cout << "Avião em primeiro na fila: " << endl;
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
		cout << "1 - Incluir avião na lista:" << endl;
		cout << "2 - Remover avião da lista:" << endl;
		cout << "3 - Listar aviões na lista:" << endl;
		cout << "4 - Modelo que possui o maior tempo de voo com tanque cheio:" << endl;
		cout << "5 - Exibir características do avião com maior capacidade de passageiros:" << endl;
		cout << "6 - Listar características do 1º avião da lista:" << endl;
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
				cout << "Opção inválida!" << endl;
		}
	}while(aux != 7);	
	
	return 0;
}

