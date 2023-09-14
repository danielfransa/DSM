//Vetor comum  e todos da fila avan�am 1 casa !

#include <iostream>
#define TAM_FILA 10
using namespace std;
typedef int elemf;

typedef struct {
			int inicio, fim, total;
			elem itens[TAM_FILA];
} Fila;

void Createf(Fila *F);
void Emptyf(Fila *F);
bool IsEmptyf(Fila *F);
bool IsFullf(Fila *F);
void Enterf(Fila *F, elem *X, bool *erro);
elem Outf(Fila *F, bool *erro);
void Printf(Fila *F);

void Createf(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
     return;
}

void Emptyf(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmptyf(Fila *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFullf(Fila *F) {
    if (F->total==TAM_FILA)
       return true;
    else 
		return false;
}

// inserir elemento na fila
void Enterf(Fila *F, elem *X, bool *erro) {
     if (!IsFullf(F)) {
          *erro=false;
          F->total++;
          F->itens[F->fim]=*X;
          F->fim++;
     }
     else *erro=true;
}


// elem X;
elem Outf(Fila *F, bool *erro) {
    if (!IsEmptyf(F)) {
    	*erro=false;
    	elem X;
		X=F->itens[F->inicio];
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
			F->itens[F->fim] = 0;
			return X;
		}
		else{ 
			F->total--;
			// todo mundo da fila d� 1 passo a frente			   
			for(int i=0; i< F->total; i++){
				F->itens[i] = F->itens[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
			
			F->itens[F->fim] = 0;// para n�o duplicar o �ltimo valor no final na fila
			F->fim--;
			return X;
		}	
    }
    else *erro=true;
}

void Printf(Fila *F){
	if(F->total == 0)
		cout << "Ningu�m na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i= F->inicio; i< F->fim; i++) 
			{
				cout << F->itens[i] << "\t";
			}
	}
}
