#include <iostream>
#include <locale>
using namespace std;

bool primo(int num){
	
	int divisor = 0;
	string resultado;
	
	for(int i=1 ; i<=num ; i++){
		if(num % i == 0){
        	divisor++;
		}
	}
    // número primo só tem 2 divisores 1 e ele mesmo!	
    if (divisor == 2){
    	return true;    	
	}else{
		return false;	
	}    
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	 int num;

    cout << "Insira um número para verificar se ele é primo!" << endl;
    cin >> num;
    
		if (primo(num) == true){
			cout << "Verdadeiro";
		}else{
			cout << "Falso";
		}
	
	return 0;
}
