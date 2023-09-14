/*
Examine o seguinte c�digo:
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;inx = *parr++;

a) O c�digo compila?
b) Ap�s executar o c�digo, qual ser� o valor de inx?
c) Ap�s executar o c�digo, para onde parr estar� apontando?

*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {

int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;
	
	// sim o c�digo compila sem nenhum erro e sem nunhuma saida para o usu�rio

	//verificar o valor de inx;
	cout << inx << endl;
	
	//verifica endere�o do arr[4]
	cout << &arr[4] << endl;
	
	//verifica endere�o que parr esta apontando
	cout << parr << endl;
	
/*
RESPOSTAS
a) O c�digo compila?
Sim
b) Ap�s executar o c�digo, qual ser� o valor de inx?
O valor � 20
c) Ap�s executar o c�digo, para onde parr estar� apontando?
Para o proximo endere�o ap�s o 4� indice do array arr que tem o valor 20;
*/


	return 0;
}
