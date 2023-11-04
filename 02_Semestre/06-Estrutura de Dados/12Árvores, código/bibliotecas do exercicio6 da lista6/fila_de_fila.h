#include <iostream>
#include "fila.h"
#define TAM_FILA 5
using namespace std;
typedef int elem;

typedef struct {
			int inicio, fim, total;
			Fila fila_de_filas[TAM_FILA];
} Fila2;

// cabeçalho
void Create(Fila2 *F2);
void Empty(Fila2 *F2);
bool IsEmpty(Fila2 *F2);
bool IsFull(Fila2 *F2);
void Enter(Fila2 *F2, Fila *X, bool *erro);
elem Out(Fila2 *F2, bool *erro);
void Print(Fila2 *F2);


void Create(Fila2 *F2) {
     F2->inicio=0;
     F2->fim=0;
     F2->total=0;
}

void Empty(Fila2 *F2) {
     F2->inicio=0;
     F2->fim=0;
     F2->total=0;
}

bool IsEmpty(Fila2 *F2) {
    if (F2->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Fila2 *F2) {
    if (F2->total==TAM_FILA)
       return true;
    else 
		return false;
}


// inserir elemento na fila de filas
void Enter(Fila2 *F2, Fila *X, bool *erro) {
     if (!IsFull(F2)) {
          *erro=false;
          F2->total++;
		  
		  // PRINCIPAL
          F2->fila_de_filas[F2->fim]= *X;

          F2->fim++;
     }
     else *erro=true;
}

Fila X;
elem Out(Fila2 *F2, bool *erro) {
    if (!IsEmpty(F2)) {
    	*erro=false;
    	
    	// PRINCIPAL
		X=F2->fila_de_filas[F2->inicio];
		
		if (F2->total == 1){// se tiver somente 1 na fila
			F2->total=0;
			F2->fim=0;
			
			// PRINCIPAL
			F2->fila_de_filas[F2->fim].inicio_fila = 0;
		}
		else{ 
			F2->total--;
			// todo mundo da fila dá 1 passo a frente			   
			for(int i=0; i< F2->total; i++){
				F2->fila_de_filas[i] = F2->fila_de_filas[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
	
			F2->fim--;
		}	
    }
    else *erro=true;
}

void Print(Fila2 *F2){
	if(F2->total == 0)
		cout << "Ninguém na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i= F2->inicio; i< F2->fim; i++) 
			{
				for(int j = 0; j < F2->total; j++)
					cout << F2->fila_de_filas[i].itens[j] << "\t"; // os itens da minha fila são outras filas
			}
	}
}

