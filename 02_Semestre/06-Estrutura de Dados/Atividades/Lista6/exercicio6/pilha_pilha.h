#define TAM_PILHA 10
typedef Pilha pilp;
typedef struct
{
	int topo;
	pilp itens[TAM_PILHA];
} Pilhap;


// Cabeçalho dos métodos
void Create (Pilhap *P);
void Push(Pilhap *P, pilp *X, bool *erro);
void Pop(Pilhap *P, bool *erro);
bool IsFull(Pilhap *P);
bool IsEmpty(Pilhap *P);
void Empty(Pilhap *P);


// Cria uma pilha
void Create(Pilhap *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo = -1;
}

// Verifica se a pilha está cheia
bool IsFull(Pilhap *P)
{
	if(P->topo == TAM_PILHA-1)
		return true;
	return false;
}

// Empilha na pilha
void Push(Pilhap *P, pilp *X, bool *erro)
{
	if(!IsFull(P)){
		P->topo++;
		P->itens[P->topo] = *X;
		*erro = false;
	}
	*erro = true;
}

// Esvazia a pilha
void Empty(Pilhap *P)
{
	for(; P->topo>=0; P->topo--){
		P->itens[P->topo] = 0;
	}
	// ou faz da seguinte forma:
	// P->topo = -1;
}

// Verifica se pilha está vazia
bool IsEmpty(Pilhap *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

// Desempilha a pilha
pilp X;
void Pop(Pilhap *P, bool *erro)
{
	if(!IsEmpty(P)){
		X = P->itens[P->topo];
		P->topo--;
		*erro = false;
	}
	*erro = true;
}



