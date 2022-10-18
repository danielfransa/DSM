/*
Como seria uma fila de pilhas? E uma pilha de filas? E uma fila de filas? E uma pilha de pilhas?
Use as bibliotecas criadas em sala de aula de pilha e fila.
Então, temos 4 estruturas citadas acima. 
Desenhe como seria cada uma delas e escreva um código que insere e remove umúnicoelemento em cada uma delas.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "fila.h"
#include "fila_fila.h"
#include "fila_pilha.h"
#include "pilha.h"
#include "pilha_fila.h"
#include "pilha_pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

fil aux;
Fila Fila1;
pil aux2;
Pilha Pilha1;
filf aux3 = Fila1;
filp aux4 = Pilha1;
Filaf FilaFila;
FilaP FilaPilha;
pilf aux5 = Fila1;
pilp aux6 = Pilha1
Pilhaf = PilhaFila;
Pilhap = PilhaPilha
 
bool erro;	
	
	
	Create(&Fila1);
	Create(&Pilha1);
	Create(&FilaFila);
	Create(&FilaPilha);
	Create(&PilhaFila);
	Create(&PilhaPilha);
	
	
	cout << "Insira um numero na Fila: " << endl;
	cin >> aux;
	
	Enter(&Fila1, &aux, &erro);
	
	cout << "Insira um numero na Pilha: "
	cin << aux2;
	
	Push(&Pilha1, &aux2, &erro);
	
	//Insere a Fila na Fila
	Enter(&FilaFila, &aux3, &erro);

	//Insere a Pilha na Fila
	Enter(&FilaPilha, &aux4, &erro);
	
	cout << "Fila Fila --> " << Print(&FilaFila) << endl;
	
	cout << "Fila Pilha --> " << Print(&FilaPilha) << endl;
	
	//Insere a Fila na Pilha
	Push(&PilhaFila, &aux5, &erro);
	
	//insere a Pilha na Pilha
	Push(&PilhaPilha, &aux6, &erro);
	
	//Teoricamente seria isso mas esta dando alguns conflitos que não estou conseguindo resolver, já alterei todos os nomes nas declarações
	//porem o conflito continua.
	
	
	return 0;
}
