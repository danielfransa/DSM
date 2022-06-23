#include <iostream>
#include <locale>
using namespace std;

int op, conv;
	string nome;
	string convidados[0][0];
	int aux;



void cadastro (int op, int conv){
	
	string convidados[conv][3];
	
			
		if(aux ==(conv)){
				cout << "Todos os cadastros foram ocupados!" << endl;
			}else{
				cout << "Informe o nome do Convidado" << endl;
				cin >> convidados[aux][0];
				
				cout << "Informe o Telefone do convidado" << endl;
				cin >>convidados[aux][1];
				
				cout << "Informe o nome o prato que o convidado irá trazer" << endl;
				cin >>convidados[aux][2];
					for(int i=0; i<conv; i++){
						if(convidados[aux][2] == convidados[i][2]){
							cout << "Já temos esse prato favor informar outro" << endl;
							cin >>convidados[aux][2];
						}else cout <<"OK" <<endl;
					}	
			}
			aux=aux+1;
			
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
		cout << "Informe quantos convidados serão cadastrados" << endl;
			cin >> conv;
		
			do{
			cout << "Escolha qual a operação deseja executar:" << endl;
			cout << "1 - Cadastrar Convidado:"<< endl;
			cout << "2 - Pesquisar convidado cadastrado (Pelo Nome):"<< endl;
			cout << "3 - Imprimir a lista de Convidados:"<< endl;
			cout << "4 - Sair:"<< endl;
			cin >> op;	
			
			switch(op){
				case 1:
					cadastro(op, conv);
					break;
				case 2:
					cout<<"Teste"<<endl;
					break;
				case 3:
					for(int i=0; i<conv; i++){
						for(int j=0; j<conv; j++){
							cout << cadastro[i][j];
						}
						cout << endl;
						
					}
					break;
				case 4:
					cout<<"Teste"<<endl;
					break;
				
			}
					
		}while(op!=4);
		 
	return 0;
}
