/*
 * Implementação de grafos não dirigidos utilizando uma
 * matriz de adjacências (apenas o triângulo inferior).
 */

#include <stdlib.h>
#include <iostream>
#include <locale>
using namespace std;

typedef struct grafo {
  int n;      /* Número de nós ou vértices */
  int **mat;  /* Matriz (a ser alocada dinamicamente) */
} Grafo;

void cria_grafo(Grafo* g, int num_ver)  { 
  int i;
  g->mat = (int**)calloc (num_ver, sizeof(int*));
  //g->mat[0] = NULL;
  for (i = 0; i < num_ver; i++)
  {
  	g->mat[i] = (int*)calloc (i, sizeof(int));
  }
  g->n = num_ver;
}

// destruir o grafo todo
void destroi(Grafo *g) {
  int i;
  for (i = 0; i < g->n; i++)
  {	// dou free na linha
  	free(g->mat[i]);
  }
  // free na matriz
  free(g->mat);
}

// lembrando que eu quero preencher o triângulo inferior da matriz
void adiciona_aresta(Grafo *g, int v1, int v2) {
  if (v1 > v2)
    g->mat[v1][v2] = 1;
  else
    g->mat[v2][v1] = 1;
}

int existe_aresta(Grafo *g, int v1, int v2) {
  return v1 > v2 ? g->mat[v1][v2] : g->mat[v2][v1];
  /* 
	if(v1 > v2)
  		return g->mat[v1][v2]
  	else
  		return g->mat[v2][v1]
  */
  
}

void remove_aresta(Grafo *g, int v1, int v2) {
  /*
  if (v1 > v2)
    g->mat[v1][v2] = 0;
  else
    g->mat[v2][v1] = 0;
 */
  v1 > v2 ? g->mat[v1][v2] = 0 : g->mat[v2][v1] = 0;
}


/* Deve imprimir grafos no seguinte formato:

  Grafo não dirigido

    0 ----- 1 ---- 2
    |       |
    |       |
    4 ----- 3 ---- 5

    E = {(0,1),(1,0),(1,2),(2,1),(3,1),(3,4)
         (3,5),(4,0),(4,3),(5,3)} 

*/

void imprime_grafo(Grafo *g, int num_ver) {
	for(int i=0; i<num_ver; i++)
		for(int j=0; j<num_ver; j++)
		{
			cout << g->mat[i][j] << " ";
				if(i==j)
				{
					cout << endl;
					break;
				}
		}
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  Grafo g;
  cria_grafo(&g, 6);
  adiciona_aresta(&g,0,1);
  adiciona_aresta(&g,1,5);
  adiciona_aresta(&g,2,2);
  adiciona_aresta(&g,5,3);
  adiciona_aresta(&g,4,2);
  adiciona_aresta(&g,5,5);
  
  cout << "Cuidado, não confundir linha da matriz com vértice do grafo" << endl << endl;
  imprime_grafo(&g,6);
  return 0;
}



