#include "pilha.h"
#define TAM_PILHA 10
#include <iostream>
typedef int elem;
typedef struct
{
	int topo, total_elem;
	Pilha vetor_de_pilhas[TAM_PILHA];
}Pilha2;


// Cabeçalho dos métodos
void Create (Pilha2 *P);
void Push(Pilha2 *P, Pilha *X, bool *erro);
void Pop(Pilha2 *P, bool *erro);
bool IsFull(Pilha2 *P);
bool IsEmpty(Pilha2 *P);
void Empty(Pilha2 *P);


// Cria uma pilha
void Create(Pilha2 *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo = -1;
}

// Verifica se a pilha está cheia
bool IsFull(Pilha2 *P)
{
	if(P->topo == TAM_PILHA-1)
		return true;
	return false;
}

// Empilha na pilha
void Push(Pilha2 *P, Pilha *X, bool *erro)
{
	if(!IsFull(P)){
		P->topo++;
		P->total_elem++;
		
		P->vetor_de_pilhas[P->topo] = *X;

		*erro = false;
	}
	*erro = true;
}

// Esvazia a pilha
void Empty(Pilha2 *P)
{
	P->topo = -1;
}

// Verifica se pilha está vazia
bool IsEmpty(Pilha2 *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

// Desempilha a pilha
Pilha Y;
void Pop(Pilha2 *P, bool *erro)
{
	if(!IsEmpty(P)){
		Y = P->vetor_de_pilhas[P->topo];
		P->topo--;
		P->total_elem--;
		*erro = false;
	}
	*erro = true;
}



