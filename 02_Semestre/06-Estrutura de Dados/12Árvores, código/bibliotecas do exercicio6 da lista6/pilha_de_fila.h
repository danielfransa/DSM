#include "fila.h"
#define TAM_PILHA 10
#include <iostream>
typedef struct
{
	int topo, total_elem;
	Fila vetor_de_filas[TAM_PILHA];
}Pilha;


// Cabeçalho dos métodos
void Create (Pilha *P);
void Push(Pilha *P, Fila *X, bool *erro);
void Pop(Pilha *P, bool *erro);
bool IsFull(Pilha *P);
bool IsEmpty(Pilha *P);
void Empty(Pilha *P);


// Cria uma pilha
void Create(Pilha *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo = -1;
}

// Verifica se a pilha está cheia
bool IsFull(Pilha *P)
{
	if(P->topo == TAM_PILHA-1)
		return true;
	return false;
}

// Empilha na pilha
void Push(Pilha *P, Fila *X, bool *erro)
{
	if(!IsFull(P)){
		P->topo++;
		P->total_elem++;
		
		P->vetor_de_filas[P->topo] = *X;
		
		//P->itens[P->topo] = *X;
		*erro = false;
	}
	*erro = true;
}

// Esvazia a pilha
void Empty(Pilha *P)
{
	P->topo = -1;
}

// Verifica se pilha está vazia
bool IsEmpty(Pilha *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

// Desempilha a pilha
Fila X;
void Pop(Pilha *P, bool *erro)
{
	if(!IsEmpty(P)){
		X = P->vetor_de_filas[P->topo];
		P->topo--;
		P->total_elem--;
		*erro = false;
	}
	*erro = true;
}



