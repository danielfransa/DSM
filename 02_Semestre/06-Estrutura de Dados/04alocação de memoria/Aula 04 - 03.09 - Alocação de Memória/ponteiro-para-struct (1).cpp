#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>
using namespace std;

struct pessoa
{
	char nome[100];
	int idade;
	float *peso=NULL;
};

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float peso2, peso3;
	int *i;
	struct pessoa *joao = NULL, pedro;
	struct pessoa *p = NULL; // declarou o ponteiro e já atribuiu valor a ele

	p = &joao; // tem que fazer o ponteiro apontar para uma estrutura
	
	strcpy(joao.nome, "Joao Guimarães Rosa");
	strcpy(p->nome, "Joao Ruimaraes Rosa");
	joao.idade = 20;
	p->idade = 30;
	
	joao = &pedro;
	*((*joao).peso) = 5;
	(*joao).idade = 5
	
	cout << (*p).nome << " tem " << (*p).idade << " anos " << endl;
	
	(*p).idade = 18;
	
	cout << joao.nome << " tem " << joao.idade << " anos " << endl;
	
	cout << p->nome << " tem " << p->idade << " anos " << endl;
	
	//p->peso = &peso2;
	p->peso = &peso3;
	peso3 = 80;
	cout << "Peso: " << *(p->peso)<< endl;
	cout << "Peso: " << peso2 << endl;
	
}
