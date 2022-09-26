/*
 Faça o exercício 4 usando duas vezes o malloc para criar a matriz, porém agora a matriz pode ser m x
n, ou seja, não quadrática. Procure na internet a alocação dinâmica de memória para matrizes.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int linha, colunas;
	int **matrix;
	
		cout << "Quantas linhas tera a matrix? " << endl;
		cin >> linha;
		
		cout << "Quantas colunas tera a matrix? " << endl;
		cin >> colunas;
		
		//aloca??o dinamica em linhas
		
		matrix = new int*[linha];
		for(int i=0; i<linha; i++ ){
			matrix[i] = new int[colunas];
		}
		
		/*
		matrix = (int**)malloc(linha *sizeof(int));
			for (int i=0;i<linha; i++){
  		  		matrix[i] = (int*)malloc(colunas * sizeof(int));
  			}
		*/
		
		for(int i=0; i<linha; i++){
			for(int j=0; j<colunas; j++){
				matrix[i][j] = 0;
			}
		}
		
		
		for(int i=0; i<linha; i++){
			cout << endl;
			for(int j=0; j<colunas; j++){
				cout << matrix[i][j];
			}
		}
		
	
	return 0;
}
