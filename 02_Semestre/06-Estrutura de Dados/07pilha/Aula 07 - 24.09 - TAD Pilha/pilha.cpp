#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num_elem;
	elem comp;
	bool erro;
	Pilha Pilha1, Pilha2;
	cout << "Quantos elementos tem sua pilha?" << endl;
	cin >> num_elem;
	
	Create(&Pilha1);
	cout << "Pilha criada." << endl;
	
	// Vamos popular a pilha
	for(int i=0; i<num_elem; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	// Exibindo a pilha para ver se foi populada
	cout << "Elementos da Pilha 1: " << endl;
	for(int i=0; i<num_elem; i++)
	{
		cout << Pilha1.itens[i] << endl;
	}
	
	cout << "Topo da Pilha1: " << Pilha1.itens[Pilha1.topo] << endl;
	cout << "Valor do topo: " << Pilha1.topo << endl;
	
	// Passando os valores da Pilha 1 para a Pilha 2
	Create(&Pilha2);
	while(Pilha1.topo>=0) // CUIDADO: quando criamos a Pilha, o topo é -1.
	{
		Pop(&Pilha1, &erro);
		Push(&Pilha2, &X, &erro);
		// CUIDADO: não precisa decrementar o topo da Pilha 1 porque ele já será decrementado dentro do Pop.
	}
	cout << "Topo da Pilha 1 após desempilhar: " << Pilha1.itens[Pilha1.topo] << endl;
	cout << "Topo da Pilha 2 após empilhar: " << Pilha2.itens[Pilha2.topo] << endl;
	
	cout << "Elementos da Pilha 2: " << endl;
	for(int i=0; i<num_elem; i++)
	{
		cout << Pilha2.itens[i] << endl;
	}	
}
