#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*
1- n^3/1000 - 100n^2 - 100n + 3

	n^3 - n^2 - n
	
	= n^3 ---> O(N^3)
	
*/

/*
2- A)
*/

	void func1(){
		int i,j,k, soma;
		for(i=1; i<n-1; i++){             // O(N)
			for(j=i+1; j<n; j++){         // O(N)
				for(k=1; k<j; k++){       // O(N) 
					soma=1				  // O(1)
				}
			}
		}
	}
/*
	O(N) * O(N) * O(N) + O(1)
	
	O(N^3) + O(1)
	
	---> O(N^3)

aqui não existe melhor caso ou caso médio já que toda ação para por N^3
*/

/*
2- B)
*/
	
	float f(int M[], int N[], int P){
		int i, j;
		float c=1.0;
		for(i=1; i<c; i++){               // O (N)
			if([i] > 1000){
				for(j=P-1; j>=0; j--){    // O (N)
					c+= M[i] * n[j];
				}
			}else if(M[i] < 500){
				for(j=P; j<P*P; j+=2){    // O (LogN)
					c += M[i]*N[j];
				}
			}else{
				for(j=1; j<P; j=2*){      // O (LogN)
					c += M[i]*N[j];
				}
			}
		}
	}
	
/*
	para casos de i > 1000: Pior caso
	
	O (N) * O (N)
	
	-----> O(N^2)
	
	Para casos de i < 500:
	
	O (N) * O (LogN)
	
	-----> O(NLogN)
	
	Para casos entre 500 e 1000: 
	
	O (N) * O (LogN)
	
	-----> O(NLogN)

o Pior caso seria o i>1000 com 	O(N^2)
o melho caro seria os dois restantes já que eles formam O(NLogN)
e não temos caso médio 


*/	
	
	
	
	
	
	
	
	return 0;
}

