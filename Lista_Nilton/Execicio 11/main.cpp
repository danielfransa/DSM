#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	srand((unsigned)time(0));
	
	int matrix[10][10];
	int maior=-99999;
	int linha, coluna;
	
	
		for(int i=0; i<10; i++){
			for(int j=0;j<10;j++){
			matrix[i][j]= rand() % 1000;	
			}	
		}
			cout << "Matrix: \n";
			for(int i=0; i<10; i++){
				for(int j=0;j<10;j++){
				cout << matrix[i][j] << " | ";
				}
				cout <<  endl;
		}
		cout << endl;
		for(int i=0; i<10; i++){
				for(int j=0;j<10;j++){
				if (matrix[i][j]>maior){
					maior = matrix[i][j];
					linha = i+1;
					coluna= j+1;
				}
		}
	}
		
		cout<<"O maior número na matrix é: " << maior << " ele esta na linha: " << linha << " e coluna: " << coluna;	
	return 0;
}
