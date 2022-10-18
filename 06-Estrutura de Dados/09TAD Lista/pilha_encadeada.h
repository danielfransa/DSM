#include <iostream>
#include <cstdlib>
using namespace std;

typedef int elem;

/*
typedef struct bloco{
        elem info;
        struct bloco *prox = NULL;
}no; 
*/
typedef struct {
        no *topo = NULL;
        int total;
} Pilha;

void Create_Stack(Pilha *P);
void Push(Pilha *P, elem *X, bool *erro);
elem Pop(Pilha*, elem* X, bool *erro);
bool IsEmpty_Stack(Pilha *P);
void Print_Stack(Pilha *P);


void Create_Stack(Pilha *P) 
{
    P->topo=NULL;
    P->total=0;
}

void Push(Pilha *P, elem *X, bool *erro) 
{
    no *novo_no=NULL;
    novo_no = (no*)malloc(sizeof(no));
    /* se eu não conseguir criar o aux é porque a memória está com espaço cheio, 
	por isso não precisa da função IsFull
	*/
	if (novo_no==NULL) 
    	*erro=true;
    else{
        *erro=false;
        novo_no->info = *X;
        // vou inserir o primeiro elemento
		if(P->topo == NULL)
		{
			P->topo = novo_no;
			novo_no->prox = NULL;
			P->total++;
		}
		else{
			novo_no->prox = P->topo;
			P->topo = novo_no;
			P->total++;	
		}
    }
}

elem Y;
elem Pop(Pilha *P, bool *erro) {
    if(!IsEmpty_Stack(P)){
        Y = P->topo->info;
        P->topo = P->topo->prox;
        P->total--;
        *erro = false;
        return Y;
    }
    *erro=true;
}     

bool IsEmpty_Stack(Pilha *P) {
    if(P->total==0)
       return true;
	return false;
}


void Print_Stack(Pilha *P){
	no *aux;
	aux = P->topo;
	int total = P->total;
	cout << endl<< "Elementos da Pilha (do topo até a base): " << endl;
	while(total>0)
	{
		cout << aux->info << endl;
		aux = aux->prox;
		total--;
	}
}
