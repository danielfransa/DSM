/*
Faça um programa que gerencie o estoque de um mercado e: 
- Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), 
nome (máximo 15 letras), preço e quantidade.
- Leia um pedido, composto por um código de produto e a quantidade. 
Localize este código no vetor e, se houver quantidade suficiente para atender 
ao pedido integralmente, faça o pedido, atualize o estoque e informe o usuário 
(exibir na tela item vendido, quantidade vendida e quantos restam no estoque). 
Repita este processo até zerar o estoque. 
- Se a quantidade do pedido for maior que o estoque, exibir mensagem com a 
quantidade de itens no estoque  
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <string.h>
using namespace std;

struct PRODUTO{
	int cod;
	char nome[15];
	float preco;
	int quant;

};

	PRODUTO cadastro[5];
	int aux, aux1, auxCad = 0, auxCod, auxQtd;
	float soma=0;	
	

void cadastroProduto();
void verificaEstoque();
void compraProduto();

void cadastroProduto(){
	//Verifica se é possivel fazer o cadastro.
	if (auxCad > 4 ){
		cout << endl;
		cout << "Impossivel cadastrar produto! \n Sua lista de produtos já esta cheia, \n entre em contato com o administrador do sistema" << endl;
		cout << endl;
	}else{
		
		cout << "Digite o código do produto." << endl;
		cin >> cadastro[auxCad].cod;
		
		cout << "Digite o nome do produto." << endl;
		cin >> cadastro[auxCad].nome;
			//limita o cadastro a 15 caracteres.
			int i = strlen(cadastro[auxCad].nome);
				if (i > 15){
	    		while(i != 14){
	        		cadastro[auxCad].nome[i] = 0;
	        		i --;
	    		}
			}
		cout << "Digite o preço por Kg do produto." << endl;
		cin >> cadastro[auxCad].preco;
		
		cout << "Digite a quantidade que estará em estoque do produto." << endl;
		cin >> cadastro[auxCad].quant;
		//O auxiliar de cadastro ganha um novo número a cada chamada.
		auxCad++;
		
		cout << endl;
		cout << "Produtos abaixo cadastrado com sucesso: " << endl;
		cout << "Código: "<<cadastro[auxCad - 1].cod << endl;
		cout <<"Nome: "<<cadastro[auxCad-1].nome << endl;
		cout <<"Preço Kg: "<<cadastro[auxCad-1].preco << endl; 
		cout <<"Quantidade em Kg: "<<cadastro[auxCad-1].quant << endl;
		cout << endl;
	}
}

void compraProduto(){
	cout << "Digite o código do produto e a quantidade que deseja comprar" << endl;
	cin >> auxCod;
	cin >> auxQtd;
	
	if(auxCad == 0){
		cout<<"Não temos produtos cadastrados."<<endl;
	}else{
		aux = -1;
		for(int i=0; i<auxCad; i++){
			if(cadastro[i].cod == auxCod){
				aux = i;
			}
		}
	}
	if(aux == -1){
		cout<<"Produto não cadastrado."<<endl;
	}else{
		if(auxQtd > cadastro[aux].quant ){
			cout << endl;
			cout << "Quantidade solicitada maior que quantidade em estoque!" << endl;
			cout << "Temos em estoque a quantidade de: " << cadastro[aux].quant << " Kg" << endl;
			cout << endl;
		}else{
			
			//cout << "Auxiliar"<< cadastro[aux].quant;
			cadastro[aux].quant = cadastro[aux].quant-auxQtd;
			 
			cout << endl;
			cout << "Ok Pedido aceito" << endl;
			cout << "Você comprou:" << endl;
			cout << auxQtd << " Kg do produto: " << cadastro[aux].nome << endl;
			soma = soma + (auxQtd * cadastro[aux].preco);
			cout << "Esse pedido ficou o total de R$ " <<  auxQtd * cadastro[aux].preco << endl;
			cout << "Seus pedidos somam o total de R$ "<< soma << " Até o momento" <<endl;
			system("Pause");
			
		
			verificaEstoque();
		}		
	}
	//aux = aux-1;
	cout << "Valor aux: " << aux;
	
}

void verificaEstoque(){
	
	cout << endl;
	cout << "Estoque:" << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
	for(int i=0; i<auxCad; i++){
		cout << "Código: "<<cadastro[i].cod << endl;
		cout <<"Nome: "<<cadastro[i].nome << endl;
		cout <<"Preço Kg: "<<cadastro[i].preco << endl; 
		cout <<"Quantidade em Kg: "<<cadastro[i].quant << endl;
		cout << "----------------------------------------------" << endl;
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int op;
	do{
		cout << "---Escolha a opção---" << endl;
		cout << "1 - Cadastro de produtos" << endl;
		cout << "2 - Verificar estoque" << endl;
		cout << "3 - Comprar produto" << endl;
		cout << "0 - Sair" << endl;
		cin >> op;
		switch (op){
			case 1:
				cadastroProduto();
				break;
			case 2:
				verificaEstoque();
				break;
			case 3:
				compraProduto();
				break;
			case 0:
				cout << "Obrigado por utilizar nosso sistema! \n Até Logo!!!" << endl;
				cout << "Total final da sua compra foi de R$ " << soma << endl;
				break;
			default:
				cout << "Opção Inválida!" << endl;
				cout << endl;
		}
	}while(op!=0);
}
