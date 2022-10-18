/*
No seu sistema operacional ao abrir o “gerenciador de tarefas” você pode 
exibir os processos que estão em execução, veja como isso é apresentado no windows:
É possível executar todos esses programas em apenas um processador graças a uma 
funcionalidade chamada de tempo compartilhado (“time-shared”). Essa funcionalidade 
mantém uma sequência de processos em uma fila, esperando para serem executados.
Faça um programa no formato de menu e usando funções para executar os seguintes itens:

1.Incluir novos processos na fila de processo;
2.Matar o processo com o maior tempo de espera(retirar esse elemento da fila);
3.Executar um processo (remover da fila)
4.Imprimir o conteúdo da fila de processos

*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "fila_struct.h"
using namespace std;
elem prc;
Fila Fila1;
bool erro;
int maior = -99999;
int indice, aux;

void inserirProcesso();
void matarMaiorTempo();
void executarProcesso();
void imprimir();


void inserirProcesso(){
	cout << "Qual o Id do processo: " << endl;
	cin >> prc.id;
	
	cout << "Qual o Nome do processo: " << endl;
	cin >> prc.name;
	
	cout << "Qual a Prioridade do processo: " << endl;
	cin >> prc.priority;
	
	cout << "Qual o Tempo do processo: " << endl;
	cin >> prc.wait;
		
	Enter(&Fila1, &prc, &erro);
	
	cout << "Processo entrou na Fila" << endl;
	
}

void matarMaiorTempo(){
	
	for(int i= Fila1.inicio; i<Fila1.fim; i++){
		if(Fila1.itens[i].wait > maior){
			maior = Fila1.itens[i].wait;
			indice = i;
		}
	}
	
	cout << "Processo de Maior tempo é: " << endl;
	cout << "Id: " << Fila1.itens[indice].id << endl;
	cout << "Nome: " << Fila1.itens[indice].name << endl;
	cout << "Prioridade: " << Fila1.itens[indice].priority << endl;
	cout << "Tempo: " << Fila1.itens[indice].wait << endl;
	cout << endl;
	cout << "Ele esta na Posição: " << indice << " da fila" << endl;
	cout << endl;
	cout << "Iniciando a eliminção dos processos..." << endl;
	
		
	for(int i=0; i<=indice; i++){
		Out(&Fila1, &erro);
	}
	
	cout << "Processo eliminado!" << endl;
	
	
}

void executarProcesso(){
	Out(&Fila1, &erro);
	
	cout << "Processo eliminado!" << endl;
	
}

void imprimir(){
	
	Print(&Fila1);
	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Create(&Fila1);
	
	
	do{
		cout << endl;
		cout << "-----MENU-----" << endl;
		cout << "1 - Incluir novo Processo:" << endl;
		cout << "2 - Matar Processo com Maior Tempo de Espera:" << endl;
		cout << "3 - Executar um processo:" << endl;
		cout << "4 - Imprimir conteudo da Fila:" << endl;
		cout << "5 - Sair: " << endl;
		cin >> aux;
		
		switch(aux){
			case 1:
				inserirProcesso();
				break;
			case 2:
				matarMaiorTempo();
				break;
			case 3:
				executarProcesso();
				break;
			case 4:
				imprimir();
				break;
			case 5:
				cout << "Obrigado por utilizar nosso programa!"	<< endl;
				break;
			default:
				cout << "Opção inválida!" << endl;
		}
	}while(aux != 5);	
	
	return 0;
}
