#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
 
//variaveis:

int n1, n2, n3, sair;

	sair = 1;
   
while(sair == 1){
		//Entradas
   		cout << "Insira o Primeiro N�mero:" << endl;
    	cin >> n1;
   	 
    	cout <<"Insira o Segundo N�mero:" << endl;
    	cin >> n2;
  	  
    	cout <<"Insira o Terceiro N�mero:" << endl;
    	cin >> n3;
		
		//C�lculo:
		if( n1>=n2+n3 || n2>=n1+n3 || n3>=n2+n1 ){
		cout<< "N�o � um triangulo!" << endl;
		
		}else if(n1 == n2 and n1 == n3){
        cout << "Seu triangulo � Equil�tero" << endl;
        
		} else  if(n1 == n2 or n1 == n3 or n2 == n3){
        cout << "Seu triangulo � Is�seles" << endl;
        
		}else{
    	cout << "Seu triangulo � Escaleno" << endl;
    	}
		cout << "Deseja fazer uma nova consulta digite 1" << endl;
    	cin >> sair;
	}
 
    return 0;

}
