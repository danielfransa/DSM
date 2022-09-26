#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int *vetor;
	int tam, aux=0;
	
	cout << "Qual o tamanho da matrix: " << endl;
	cin >> tam;
	
	vetor = (int*)malloc(tam * sizeof(int));
		
	for(int i=0; i<tam; i++){
		
		cout << "Insira o valor do " << i+1 << "? item do vetor." <<endl;
		cin >> vetor[i];
	}
	cout << "Vetor antes de adquar!" << endl;
	cout << "["; 
	for(int i=0; i<tam; i++){
		cout << vetor[i] << " - ";	
	}
	cout << "]" << endl;
	
	while(aux < tam-1){
		if(vetor[aux] == vetor[aux+1]){
			for(int i=aux; i<tam-1; i++){
				vetor[i] = vetor[i+1];
			}
			tam--;
			vetor = (int*)realloc(vetor, tam* sizeof(int));
		}else{
			aux++;
		}
	}
	
	cout << endl;
	cout << "Vetor depois de adquar!" << endl;
	cout << "Tamanho do novo vetor é: " << tam << endl;
	cout << "[";	
	for(int i=0; i<tam; i++){
		cout << vetor[i] << " - ";	
		}
	cout << "]" << endl;
		 
	return 0;
}
