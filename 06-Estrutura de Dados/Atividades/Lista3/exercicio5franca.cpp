/*
5) O que aparecer� quando executarmos o programa abaixo?
int count = 30, *temp, sum = 2;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
Cout <<  � count = �count << �*temp = � *temp << �sum = � sum;

RESPOSTA

Esse c�digo n�o vai compilar pois o cout esta com a sintaxe errada, acertando o mesmo ficaria o seguinte:
count, temp e sum ter�o o mesmo valor que � 20 com temp apontando para sum!

*/

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
int count = 30, *temp, sum = 2;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
cout <<  " count = " << count << " *temp = " << *temp << " sum = " << sum << endl;


	return 0;
}
