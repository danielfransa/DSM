//Vetor comum  e todos da fila avançam 1 casa !

#include <iostream>
#include "fila.h"
#define TAM_FILA 5

using namespace std;
typedef Fila filf;

typedef struct {
			int inicio, fim, total;
			filf itens[TAM_FILA];
} Filaf;

Fila filf1;

void Create(Filaf *F);
void Empty(Filaf *F);
bool IsEmpty(Filaf *F);
bool IsFull(Filaf *F);
void Enter(Filaf *F, filf *X, bool *erro);
filf Out(Filaf *F, bool *erro);
void Print(Fila *F);

void Create(Filaf *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
     return;
}

void Empty(Filaf *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmpty(Filaf *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Filaf *F) {
    if (F->total==TAM_FILA)
       return true;
    else 
		return false;
}

// inserir elemento na fila
void Enter(Filaf *F, filf *X, bool *erro) {
     if (!IsFull(F)) {
          *erro=false;
          F->total++;
          F->itens[F->fim]=*X;
          F->fim++;
     }
     else *erro=true;
}


// elem X;
filf Out(Filaf *F, bool *erro) {
    if (!IsEmpty(F)) {
    	*erro=false;
    	filf X;
		X=F->itens[F->inicio];
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
			F->itens[F->fim] = filf1;
			return X;
		}
		else{ 
			F->total--;
			// todo mundo da fila dá 1 passo a frente			   
			for(int i=0; i< F->total; i++){
				F->itens[i] = F->itens[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
			
			F->itens[F->fim] = filf1;// para não duplicar o último valor no final na fila
			F->fim--;
			return X;
		}	
    }
    else *erro=true;
}

void Print(Filaf *F){
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

