#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
 
//variaveis:

int n1, n2, n3, sair;

	sair = 1;
   
while(sair == 1){
		//Entradas
   		cout << "Insira o Primeiro Número:" << endl;
    	cin >> n1;
   	 
    	cout <<"Insira o Segundo Número:" << endl;
    	cin >> n2;
  	  
    	cout <<"Insira o Terceiro Número:" << endl;
    	cin >> n3;
		
		//Cálculo:
		if( n1>=n2+n3 || n2>=n1+n3 || n3>=n2+n1 ){
		cout<< "Não é um triangulo!" << endl;
		
		}else if(n1 == n2 and n1 == n3){
        cout << "Seu triangulo é Equilátero" << endl;
        
		} else  if(n1 == n2 or n1 == n3 or n2 == n3){
        cout << "Seu triangulo é Isóseles" << endl;
        
		}else{
    	cout << "Seu triangulo é Escaleno" << endl;
    	}
		cout << "Deseja fazer uma nova consulta digite 1" << endl;
    	cin >> sair;
	}
 
    return 0;

}
