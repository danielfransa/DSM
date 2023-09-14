/*
Considerando a estrutura do exerc�cio anterior, escreva uma fun��o que receba seis pontos, 
preenchidos pelo usu�rio. Os tr�s primeiros pontos formam um tri�ngulo e os outros tr�s formam 
outro tri�ngulo. Comparando os dois tri�ngulos, classifique se s�o is�sceles, equil�teros e escalenos.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <cmath>

using namespace std;

struct PONTOS {
	double a1, b1, c1, a2, b2, c2;
};

void triangulo(PONTOS p);

void triangulo(PONTOS p){
	
	double ab1, ac1, bc1, ab2, ac2, bc2;
	int aux1, aux2;
	aux1 = aux2 = 0;
	//calcula tamanho das retas do triangulo 1
	ab1 = fabs(p.a1 - p.b1);
	ac1 = fabs(p.a1 - p.c1);
	bc1 = fabs(p.b1 - p.c1);
	
	//cout << "Triangulo 1: Lado A => " << ab1 << " Lado B => " << ac1 << "Lado C => " << bc1 << endl;
	
	//calcula tamanho das retas do triangulo 2
	ab2 = fabs(p.a2 - p.b2);
	ac2 = fabs(p.a2 - p.c2);
	bc2 = fabs(p.b2 - p.c2);
	
	//cout << "Triangulo 2: Lado A => " << ab2 << " Lado B =>" << ac2 << "Lado C => " << bc2 << endl;
	
	//valida se o primeiro triangulo realmente � um triangulo.		
	if(fabs(ac1 - bc1) < ab1 && ab1 < (ac1 + bc1)){
		aux1++;
	}else if(fabs(ab1 - bc1) < ac1 && ac1 < (ab1 + bc1)){
		aux1++;
	}else if(fabs(ab1 - ac1) < bc1 && ac1 < (ab1 + ac1)){
		aux1++;
	}
	
	//valida se o segundo triangulo realmente � um triangulo.		
	if(fabs(ac2 - bc2) < ab2 && ab2 < (ac2 + bc2)){
		aux2++;
	}else if(fabs(ab2 - bc2) < ac2 && ac2 < (ab2 + bc2)){
		aux2++;
	}else if(fabs(ab2 - ac2) < bc2 && ac2 < (ab2 + ac2)){
		aux2++;
	}
	
	//verifica lados do triangulo 1
	if(aux1 > 0 ){
		if(ab1 == ac1 && ab1 == bc1){
			cout << "Triangulo 1 � Equil�tero" << endl;
		}else if(ab1 == ac1 || ab1 == bc1){
			cout << "Triangulo 1 � Is�celes" << endl;
		}else{
			cout << "Triangulo 1 � Escaleno" << endl;
		} 
	}else{
		cout << "Com os pontos do triangulo 1 n�o foi possivel formar um triangulo:" << endl;
		cout << "Triangulo 1: Lado A => " << ab1 << " Lado B => " << ac1 << "Lado C => " << bc1 << endl;
	}
	
		//verifica lados do triangulo 1
	if(aux2 > 0 ){
		if(ab2 == ac2 && ab2 == bc2){
			cout << "Triangulo 2 � Equil�tero" << endl;
		}else if(ab2 == ac2 || ab2 == bc2){
			cout << "Triangulo 2 � Is�celes" << endl;
		}else{
			cout << "Triangulo 2 � Escaleno" << endl;
		} 
	}else{
		cout << "Com os pontos do triangulo 2 n�o foi possivel formar um triangulo:" << endl;
		cout << "Triangulo 2: Lado A => " << ab2 << " Lado B =>" << ac2 << "Lado C => " << bc2 << endl;
	}
	
} 



int main() {
	setlocale(LC_ALL, "Portuguese");
	
	PONTOS pontos;
	
	cout << "Digite os valores do ponto A, B e C do primeiro triangulo(a b c)" << endl;
	cin >> pontos.a1;
	cin >> pontos.b1;
	cin >> pontos.c1;
	
	cout << "Digite os valores do ponto A, B e C do segundo triangulo(a b c)" << endl;
	cin >> pontos.a2;
	cin >> pontos.b2;
	cin >> pontos.c2;
		
	//cout << "Ponto 1: " << "(" << pontos.x1 << " " << pontos.y1 << ")" << endl;
	//cout << "Ponto 2: " << "(" << pontos.x2 << " " << pontos.y2 << ")" << endl;	
	
	triangulo(pontos);
	
	return 0;
}
