#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;

typedef struct no{
	int conteudo;
	struct no *esquerda, *direita;
}No;


typedef struct{
	No *raiz;
}ArvB;

void inserir(ArvB *arv, int valor);
void inserirEsq(No *no, int valor);
void inserirDir(No *no, int valor);
int tamanho(No *raiz);
No *remover(No *raiz, int chave);
int buscar (No *raiz, int chave);
void imprimir(No *raiz);
void preOrdem(No *raiz);
void emOrdem(No *raiz);
void posOrdem(No *raiz);

void inserirDir(No *no, int valor)
{	// inserir do lado direito da árvore
	if(no->direita==NULL)
	{
		No *novo = (No*)malloc(sizeof(No));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		no->direita = novo;
	}
	else
	{	// se o valor que eu quero inserir é maior que o nó então vai para a direita
		// e se for menor vai para a esquerda
		if(valor > no->direita->conteudo)
			inserirDir(no->direita, valor);
		if(valor < no->direita->conteudo)
			inserirEsq(no->direita, valor);
	}
}

// inserir do lado esquerdo da árvore
void inserirEsq(No *no, int valor)
{	// eu insiro na esquerda se não tiver ninguém na esquerda
	if(no->esquerda == NULL)
	{
		No *novo = (No*)malloc(sizeof(No));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		no->esquerda = novo;
	}
	else
	{
		if(valor < no->esquerda->conteudo)
			inserirEsq(no->esquerda, valor);
		if(valor > no->esquerda->conteudo)
			inserirDir(no->esquerda, valor);
	}
}

// inserir na árvore
void inserir(ArvB *arv, int valor)
{
	if(arv->raiz==NULL)
	{
		No *novo = (No*)malloc(sizeof(No));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		arv->raiz = novo;
	}
	else
	{
		if(valor < arv->raiz->conteudo)
			inserirEsq(arv->raiz, valor);
		if(valor > arv->raiz->conteudo)
			inserirDir(arv->raiz, valor);
	}
}

int tamanho(No *raiz)
{
	if(raiz==NULL)
		return 0;
	else
		return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
}


No *remover(No *raiz, int chave)
{
	if(raiz == NULL)
	{
		cout << "Elemento não encontrado" << endl;
		return NULL;	
	}
	else
	{
		if(raiz->conteudo == chave)
		{	// REMOÇÃO DE NÓ FOLHA (NÓS SEM FILHOS)
			if(raiz->esquerda == NULL && raiz->direita == NULL)
			{
				free(raiz);
				return NULL;
			}
			else
			{	// REMOÇÃO DE NÓS QUE POSSUEM APENAS 1 FILHO
				if(raiz->esquerda == NULL || raiz->direita == NULL)
				{// vamos salvar ou o filho da esq ou da dir
					No *aux;
					//descobrir qual filho não é nulo
					if(raiz->esquerda != NULL)
						aux = raiz->esquerda;
					else // eu tenho certeza que a dir não é nulo
						aux = raiz->direita;
					free(raiz);
					return aux; // o aux possui o endereço de memória do filho da esq ou da dir
				}
				else
				{   /* REMOÇÃO DE NÓS QUE POSSUEM 2 FILHOS
    				- vá para a sub-arvore a esq e pega o elemento mais à dir
    				
    				OU
    				
    				- vá para a sub-arvore a dir e pega o elemento mais a esq
    				
    				Nas 2 estratégias pegamos o elemento que mais se aproxima do elemento que vamos remover
				*/
    				// VOCÊ QUE ESCOLHE A ESTRATÉGIA DE SEGUIR PARA A DIR OU ESQ, NESSE CASO ESCOLHEMOS A SUB-ARVORE DA ESQ
					No *aux = raiz->esquerda;
					/* quando while finalizar significa que o meu aux vai apontar para o nó mais a direita 
					da minha sub-arvore da esquerda	*/
					while(aux->direita != NULL)
						aux= aux->direita;
					raiz->conteudo = aux->conteudo;
					aux->conteudo = chave;
					raiz->esquerda = remover(raiz->esquerda, chave);
					return raiz;
					// o free no nó será dado quando ele encontrar o nó sem filhos
				}
			}			
		}
		else
		{
			if(chave < raiz->conteudo)
				raiz->esquerda = remover(raiz->esquerda, chave);
			else
				raiz->direita = remover(raiz->direita, chave);
			return raiz;
		}
	}	
}

int buscar (No *raiz, int chave)
{
	if(raiz==NULL)
		return -1; // esse retorno não pode pertencer ao conj de elementos da sua árv. bin
	else
	{
		if(raiz->conteudo == chave) // O(1)
			return raiz->conteudo;
		else
		{	// aqui está a extrema eficiência da busca em Arv. Bin
			if(chave < raiz->conteudo)
				return buscar(raiz->esquerda, chave); // O(logN)
			else
				return buscar(raiz->direita, chave); // O(LogN)
		}
	}
}

void imprimir(No *raiz)
{
	if(raiz !=NULL)
	{
		imprimir(raiz->esquerda);
		cout << raiz->conteudo << " ";
		imprimir(raiz->direita);
	}
}

// Pré-ordem ( C, E, D )
void preOrdem(No *raiz) {
    if (raiz != NULL) {
        cout << raiz->conteudo << " ";
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

// Em-ordem ( E, C, D )
void emOrdem(No *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        cout << raiz->conteudo << " ";
        emOrdem(raiz->direita);
    }
}

// Pós-ordem ( E, D, C )
void posOrdem(No *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        cout << raiz->conteudo << " ";
    }
}
 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op, valor;
	ArvB arv;
	arv.raiz = NULL;
	No *raiz = NULL;
	
	do
	{
		cout << "\n 0 - sair\n 1 - inserir\n 2 - imprimir \n 3 - buscar \n 4 - remover \n 5 - Pré-ordem \n 6 - Em-ordem \n 7 - Pós-ordem" << endl;
		cin >> op;
		
		switch(op)
		{
			case 0:
				cout << "Saindo" << endl;
				break;
			case 1:
				cout <<  "Digite um valor: ";
				cin >> valor;
				inserir(&arv, valor);
				break;
			
			case 2: 
				cout << "Impressao da arvore." << endl;
				imprimir(arv.raiz);
				cout << endl << "Tamanho: " << tamanho(arv.raiz);
				break;
			
			case 3:
				cout << "Digite o valor que deseja buscar:" << endl;
				cin >> valor;
				cout << "Resultado da busca: " << buscar(arv.raiz, valor);
				break;
			
			case 4:
				cout << "Digite o valor que deseja remover:" << endl;
				cin >> valor;
				raiz = remover(arv.raiz, valor);
				break;
			
			case 5: 
				cout << "Pré-ordem" << endl;
				preOrdem(arv.raiz);
				break;
			
			case 6: 
				cout << "Em-ordem" << endl;
				emOrdem(arv.raiz);
				break;
			
			case 7: 
				cout << "Pós-ordem" << endl;
				posOrdem(arv.raiz);
				break;
			
			default:
				cout << "Opção inválida" << endl;
		}
	}while(op!=0);
}
