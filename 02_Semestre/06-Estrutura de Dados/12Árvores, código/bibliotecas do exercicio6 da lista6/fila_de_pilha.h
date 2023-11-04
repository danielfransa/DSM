#include <iostream>
#include "pilha.h"
#define TAM_FILA 5
using namespace std;
typedef int elem;

typedef struct {
			int inicio, fim, total;
			Pilha fila_de_pilhas[TAM_FILA];
} Fila;

// cabeçalho
void Create(Fila *F);
void Empty(Fila *F);
bool IsEmpty(Fila *F);
bool IsFull(Fila *F);
void Enter(Fila *F, Pilha *X, bool *erro);
elem Out(Fila *F, bool *erro);
void Print(Fila *F);


void Create(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

void Empty(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmpty(Fila *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Fila *F) {
    if (F->total==TAM_FILA)
       return true;
    else 
		return false;
}


// inserir elemento na fila
void Enter(Fila *F, Pilha *X, bool *erro) {
     if (!IsFull(F)) {
          *erro=false;
          F->total++;
		  
		  // PRINCIPAL
          F->fila_de_pilhas[F->fim] = *X;

          F->fim++;
     }
     else *erro=true;
}


Pilha Y;
elem Out(Fila *F, bool *erro) {
    if (!IsEmpty(F)) {
    	*erro=false;
    	
    	// PRINCIPAL
		Y = F->fila_de_pilhas[F->inicio];
		
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
		}
		else{ 
			F->total--;
			// todo mundo da fila dá 1 passo a frente			   
			for(int i=0; i< F->total; i++){
				F->fila_de_pilhas[i] = F->fila_de_pilhas[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
			
			F->fim--;
		}	
    }
    else *erro=true;
}

void Print(Fila *F){
	if(F->total == 0)
		cout << "Ninguém na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i = F->inicio; i<= F->fim; i++) 
		{   // imprime as pilhas enfileiradas
			cout << F->fila_de_pilhas[i] << endl;
		}
	}
}

