//Vetor comum  e todos da fila avançam 1 casa !

#include <iostream>
#include "pilha.h"
#define TAM_FILA 5
using namespace std;
typedef Pilha filp;

typedef struct {
			int inicio, fim, total;
			filp itens[TAM_FILA];
} Filap;

Pilha filp1;

void Create(Filap *F);
void Empty(Filap *F);
bool IsEmpty(Filap *F);
bool IsFull(Filap *F);
void Enter(Filap *F, filp *X, bool *erro);
filp Out(Filap *F, bool *erro);
void Print(Filap *F);

void Create(Filap *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
     return;
}

void Empty(Filap *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmpty(Filap *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Filap *F) {
    if (F->total==TAM_FILA)
       return true;
    else 
		return false;
}

// inserir elemento na fila
void Enter(Filap *F, filp *X, bool *erro) {
     if (!IsFull(F)) {
          *erro=false;
          F->total++;
          F->itens[F->fim]=*X;
          F->fim++;
     }
     else *erro=true;
}


// elem X;
filp Out(Filap *F, bool *erro) {
    if (!IsEmpty(F)) {
    	*erro=false;
    	filp X;
		X=F->itens[F->inicio];
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
			F->itens[F->fim] = filp1;
			return X;
		}
		else{ 
			F->total--;
			// todo mundo da fila dá 1 passo a frente			   
			for(int i=0; i< F->total; i++){
				F->itens[i] = F->itens[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
			
			F->itens[F->fim] = filp1;// para não duplicar o último valor no final na fila
			F->fim--;
			return X;
		}	
    }
    else *erro=true;
}

void Print(Filap *F){
	if(F->total == 0)
		cout << "Ninguém na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i= F->inicio; i< F->fim; i++) 
			{
				cout << F->itens[i].itens << "\t";
			}
	}
}

