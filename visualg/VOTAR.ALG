Algoritmo "votar"

Var
nome : caracter
idade : Inteiro

Inicio

escreval("Informe seu nome")
leia(nome)

escreval("Informe sua idade")
leia(idade)

//se(idade >= 16) entao
//         escreval(nome, " voc� j� pode votar")
//fimse
//se(idade < 16) entao
//         escreval(nome, " voc� n�o pode votar")
//fimse

//Estrutura condicional composta
//se(idade >= 16) entao
//           escreval(nome, " voc� j� pode votar")
//         senao
//           escreval(nome, " voc� n�o pode votar")
//fimse

//Estrutura condicional encadeada
    se (idade >= 18) entao
       escreval(nome, " voc� pode votar")
     senao
       se (idade >= 16) e (idade < 18 ) entao
         escreval(nome, " voc� pode votar mas, n�o � obrigat�rio")
          senao
           escreval(nome, " voc� n�o pode votar")
       fimse
    fimse

Fimalgoritmo