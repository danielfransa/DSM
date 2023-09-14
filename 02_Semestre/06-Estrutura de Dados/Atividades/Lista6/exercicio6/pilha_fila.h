#define TAM_PILHA 10
typedef Fila pilf;
typedef struct
{
	int topo;
	pilf itens[TAM_PILHA];
} Pilhaf;


// Cabeçalho dos métodos
void Create (Pilhaf *P);
void Push(Pilhaf *P, pilf *X, bool *erro);
void Pop(Pilhaf *P, bool *erro);
bool IsFull(Pilhaf *P);
bool IsEmpty(Pilhaf *P);
void Empty(Pilhaf *P);


// Cria uma pilha
void Create(Pilhaf *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo = -1;
}

// Verifica se a pilha está cheia
bool IsFull(Pilhaf *P)
{
	if(P->topo == TAM_PILHA-1)
		return true;
	return false;
}

// Empilha na pilha
void Push(Pilhaf *P, pilf *X, bool *erro)
{
	if(!IsFull(P)){
		P->topo++;
		P->itens[P->topo] = *X;
		*erro = false;
	}
	*erro = true;
}

// Esvazia a pilha
void Empty(Pilhaf *P)
{
	for(; P->topo>=0; P->topo--){
		P->itens[P->topo] = 0;
	}
	// ou faz da seguinte forma:
	// P->topo = -1;
}

// Verifica se pilha está vazia
bool IsEmpty(Pilhaf *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

// Desempilha a pilha
pilf X;
void Pop(Pilhaf *P, bool *erro)
{
	if(!IsEmpty(P)){
		X = P->itens[P->topo];
		P->topo--;
		*erro = false;
	}
	*erro = true;
}



