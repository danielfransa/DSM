#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand((unsigned)time(0));
	
	int matrixA[4][4], matrixB[4][4], matrixC[4][4];
	
	for(int i=0; i<4; i++){
			for(int j=0;j<4;j++){
			matrixA[i][j]= rand()%(10, 100);	
			}	
		}
			cout << "Matrix A: \n";
			for(int i=0; i<4; i++){
				for(int j=0;j<4;j++){
				cout << matrixA[i][j] << " | ";
				}
				cout <<  endl;
			}
			cout << endl;
		
		for(int i=0; i<4; i++){
			for(int j=0;j<4;j++){
			matrixB[i][j]= rand()%(10, 100);	
			}	
		}
			cout << "Matrix B: \n";
			for(int i=0; i<4; i++){
				for(int j=0;j<4;j++){
				cout << matrixB[i][j] << " | ";
				}
				cout <<  endl;
			}
			cout << endl;
			
			for(int i=0; i<4; i++){
				for(int j=0;j<4;j++){
					if(matrixA[i][j]>matrixB[i][j]){
						matrixC[i][j] = matrixA[i][j];
					}else{
						matrixC[i][j] = matrixB[i][j];
					}	
			}	
		}
			cout << "Matrix dos Maiores: \n";
			for(int i=0; i<4; i++){
				for(int j=0;j<4;j++){
				cout << matrixC[i][j] << " | ";
				}
				cout <<  endl;
			}
			cout << endl;
		
	return 0;
}
