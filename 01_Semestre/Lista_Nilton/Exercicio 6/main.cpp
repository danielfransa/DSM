#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float peso, idade;
	
	cout << " Qual a sua idade? " << endl;
	cin >> idade;
	
	cout << "Qual seu peso? " << endl;
	cin >> peso; 
	
	if (idade >= 12){
		if (peso >= 60){
			cout << "Voc� dever� tomar:" << ((1000 / 500) * 20)<< " gotas.";
		}else
			cout << "Voc� dever� tomar:" << ((875.0 / 500.0) * 20) << " gotas.";
	}else
		if (peso >=5.0 & peso <=9.0){
			cout << "Voc� dever� tomar:" << ((125.0 / 500.0) * 20)<< " gotas.";
		}else
		if (peso >=9.1 & peso <=16.0){
			cout << "Voc� dever� tomar:" << ((250.0 / 500.0) * 20)<< " gotas.";
		}else
		if (peso >=16.1 & peso <=24.0){
			cout << "Voc� dever� tomar:" << ((375.0 / 500.0) * 20)<< " gotas.";
		}else
		if (peso >=24.1 & peso <=30.0){
			cout << "Voc� dever� tomar:" << ((500.0 / 500.0) * 20)<< " gotas.";
		}else
		if (peso >=30.1){
			cout << "Voc� dever� tomar:" << ((750.0 / 500.0) * 20)<< " gotas.";
		}
	
	
	return 0;
}
