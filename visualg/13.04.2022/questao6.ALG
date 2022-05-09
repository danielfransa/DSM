Algoritmo "questão6"
// Autor(a)    : Daniel França
// Data atual  : 13/04/2022
Var
nome_produto, tipo_pagamento : caracter
preco, desconto, valor : real
quant : inteiro


Inicio
 escreval("Descreva o nome do produto:")
 leia(nome_produto)
 escreval("Informe o preço unitário:")
 leia(preco)
 escreval("Informe a quantidade comprada:")
 leia(quant)
 escreval("Informe a forma de pagamento (V) para a vista e (P) para a prazo")
 leia(tipo_pagamento)

 se (maiusc(tipo_pagamento)) = "V" então
    valor := (preco * quant)
    desconto := (valor * 0.1)
    valor := (valor - desconto)
    escreval("O Valor da seu Desconto é: R$",desconto)
    escreval("O Valor da sua Compra já com desconto é: R$",valor)
    senão
    valor := (preco * quant)
    escreval("O Valor da sua Compra é: R$",valor)
    
 fimse

Fimalgoritmo