/*
 * Implementação de grafos dirigidos utilizando matriz de adjacências.
 */

#include <stdlib.h>
#include <iostream>
#include <locale>
using namespace std;

typedef struct grafo {
  int n;      /* Número de nós */
  int **mat;  /* Matriz (a ser alocada dinamicamente) */
} Grafo;


void cria_grafo(Grafo* g, int num_ver)  { 
  int i;

  g->mat = (int**)calloc (num_ver, sizeof(int*));
  for (i = 0; i < num_ver; i++)
  {
  	g->mat[i] = (int*)calloc (num_ver, sizeof(int));
  }
  g->n = num_ver;
}

void destroi(Grafo *g) {
  int i;
  for (i = 0; i < g->n; i++)
  {
  	free(g->mat[i]);
  }
  free(g->mat);
}

void adiciona_aresta(Grafo *g, int v1, int v2) {
  g->mat[v1][v2] = 1;
}

int existe_aresta(Grafo *g, int v1, int v2) {	
  return g->mat[v1][v2];
}

void remove_aresta(Grafo *g, int v1, int v2) {
  g->mat[v1][v2] = 0;
}


/* Deve imprimir grafos no seguinte formato:

  Grafo dirigido

    0 ----> 1 --->2
    ^       ^
    |       |
    4 <-----3<----5

    E = {<0,1>,<1,2><3,1>,<4,0>,<5,3>}

*/

void imprime_grafo(Grafo *g, int num_ver) {
	for(int i=0; i<num_ver; i++)
		for(int j=0; j<num_ver; j++)
		{
			cout << g->mat[i][j] << " ";
				if(j==num_ver-1)
					cout << endl;
		}
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  Grafo g;
  cria_grafo(&g, 4);
  adiciona_aresta(&g,0,0);
  adiciona_aresta(&g,1,2);
  adiciona_aresta(&g,3,1);
  adiciona_aresta(&g,2,0);
  adiciona_aresta(&g,3,2);
  
  cout << "Cuidado, não confundir linha da matriz com vértice do grafo" << endl << endl;
  imprime_grafo(&g, 4);
  cout << endl;
  remove_aresta(&g,1,2);
  imprime_grafo(&g, 4);
  cout << endl;
  existe_aresta(&g,3,1) ? cout << "Existe aresta" : cout << "Não existe aresta"; 
  
  return 0;
}
