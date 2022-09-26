#include <iostream>
#include <locale>
using namespace std;

bool perfeito(int num){
	
	int soma, div;
		
	for (int i=1; i<num; i++){
			div = num % i;
			if(div == 0){
				soma += i;
			}
		}
		if (soma == num ){
			return true;
		}else{
			return false;
		}	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	 int num;

    cout << "Insira um número para verificar se ele é prefeito!" << endl;
    cin >> num;
    	
		if(perfeito(num) == true){
			cout << "Verdadeiro";
		}else{
			cout << "Falso";
		}
	
	return 0;
}
