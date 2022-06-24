#include <iostream>
#include <locale>
using namespace std;

int op, conv, auxnome, aux1;
	string nome;
	string convidados[0][0];
	int aux=0;


int menu(){
	cout << endl;
		cout << "Escolha qual a operação que deseja executar:" << endl;
			cout << "1 - Cadastrar Convidado:"<< endl;
			cout << "2 - Pesquisar convidado cadastrado (Pelo Nome):"<< endl;
			cout << "3 - Imprimir a lista de Convidados:"<< endl;
			cout << "4 - Sair:"<< endl;
			cin >> op;
	cout << endl;
		return op;
	
}

bool listaCheia(int aux, int conv){
	if (aux >= conv){
		return true;
	}else
		return false;
}

bool pesquisaPrato(int aux1, int auxnome){
	for(int i=0; i<=aux1-1; i++){
		if(convidados[aux1][2] == convidados[i][2]){
			auxnome = auxnome + 1;
		}
	}
		if(auxnome == 1){
			return true;
			auxnome = 0;
		}else
			return false;
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	
		cout << "Informe quantos convidados serão cadastrados" << endl;
			cin >> conv;
			
		string convidados[conv][3];	
		
			do{	
				menu();	
			
			switch(op){
				case 1:
					if(listaCheia(aux, conv) == true){
						cout << endl;
						cout << "----TODOS OS CADASTROS FORAM OCUPADOS ESCOLHA OUTRA OPÇÃO!----" << endl;
						cout << endl;
					}else{
						cout << "Informe o nome do Convidado" << endl;
						cin >> convidados[aux][0];
				
						cout << "Informe o Telefone do convidado" << endl;
						cin >>convidados[aux][1];
				
						cout << "Informe o nome o prato que o convidado irá trazer" << endl;
						cin >>convidados[aux][2];
								aux1 = aux;
							for(int i=0; i<=aux1-1; i++){
								if(convidados[aux1][2] == convidados[i][2]){
									auxnome = auxnome + 1;
								}
							}
							while(auxnome >= 1){
								cout << "Prato já cadastrado Informe outro tipo:" << endl;
								cin >>convidados[aux][2];
									aux1 = aux;
									auxnome = 0;
								for(int i=0; i<=aux1-1; i++){
									if(convidados[aux1][2] == convidados[i][2]){
											auxnome = auxnome + 1;
									}
								}
							}
								auxnome = 0;
							
					}
						aux=aux+1;
			
					break;
				case 2:
					cout << "Digite o nome que deseja encontrar na lista" << endl;
					cin >> nome;
						cout<<endl;
						for(int i=0; i<=aux-1; i++){
							if(convidados[i][0] == nome){
									auxnome = auxnome + 1;
							}
						}
						if(auxnome == 1){
							cout << "Nome já esta na Lista!";
							auxnome = 0;
							cout << endl;
						}else
							cout << "Nome não esta na Lista!";
							cout << endl;
								
								break;
				case 3:
					for(int i=0; i<conv; i++){
						for(int j=0; j<3; j++){
							cout << convidados[i][j] << " - ";
						}
							cout<<endl;
					}
					break;
				case 4:
					cout<<"Obrigado por utilizar nosso programa!"<<endl;
					break;
				
			}
					
		}while(op!=4);
		 
	return 0;
}
