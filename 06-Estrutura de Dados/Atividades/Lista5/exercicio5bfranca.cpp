/*
Implemente  no  metodo  main(...),  um  programa  que  leia  20  números  de  um  vetor  (tendo  valores  positivos, 
negativos, pares e ímpares). Crie três pilhas (P1, P2 e P3), estáticas de tamanho 20 e proceda, para cada um deles, 
como segue:

-se o número for par (seja positivo ou negativo), insira-o na pilha P1;
-se o número lido for ímpar(seja positivo ou negativo), insira na pilha P2;
-se tiver valor positivo na pilha P2, retirar da pilha P2 e inserir na pilha P3;
-se tiver negativo na pilha P1, retirar da pilha P1 e inserir na pilha P3.
-Ao final, imprima cada uma das pilhas P1, P2 e P3
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int aux[20];
	int cont1=0, cont2=0, cont3=0, aux2;
	elem num;
	bool erro;
	Pilha Pilha1, Pilha2, Pilha3;
	
	//recebe todos os valores em um array aux;
	for(int i=0; i<20; i++){
		cout << "Insira o " << i+1 << "° número" << endl;
		cin >> aux[i];
		
	}
	
	Create(&Pilha1);
	Create(&Pilha2);
	Create(&Pilha3);
	
	for(int i=0; i<20; i++){
		if(aux[i] % 2 == 0){
			if(aux[i] > 0){
				Push(&Pilha1, &aux[i], &erro);
				cont1++;	
			}else{
				Push(&Pilha3, &aux[i], &erro);
				cont3++;
			}			
		}else{
			if(aux[i] > 0){
				Push(&Pilha3, &aux[i], &erro);
				cont3++;		
			}else{
				Push(&Pilha2, &aux[i], &erro);
				cont2++;
			}
		}
	}
	
	
	
		cout << "Elementos da Pilha1: " << endl;
	for(int i=0; i<cont1; i++)
	{
		cout << Pilha1.itens[i] << ", ";
	}
		cout << endl;
	
	
	
	cout << "Elementos da Pilha2: " << endl;
	for(int i=0; i<cont2; i++)
	{
		cout << Pilha2.itens[i] << ", ";
	}
	cout << endl;
	
		
	cout << "Elementos da Pilha3: " << endl;
	for(int i=0; i<cont3; i++)
	{
		cout << Pilha3.itens[i] << ", ";
	}
	cout << endl;
	
	return 0;
}
