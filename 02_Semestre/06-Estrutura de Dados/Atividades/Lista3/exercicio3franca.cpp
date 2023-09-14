/*
Examine o seguinte código:
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;inx = *parr++;

a) O código compila?
b) Após executar o código, qual será o valor de inx?
c) Após executar o código, para onde parr estará apontando?

*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {

int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;
	
	// sim o código compila sem nenhum erro e sem nunhuma saida para o usuário

	//verificar o valor de inx;
	cout << inx << endl;
	
	//verifica endereço do arr[4]
	cout << &arr[4] << endl;
	
	//verifica endereço que parr esta apontando
	cout << parr << endl;
	
/*
RESPOSTAS
a) O código compila?
Sim
b) Após executar o código, qual será o valor de inx?
O valor é 20
c) Após executar o código, para onde parr estará apontando?
Para o proximo endereço após o 4º indice do array arr que tem o valor 20;
*/


	return 0;
}
