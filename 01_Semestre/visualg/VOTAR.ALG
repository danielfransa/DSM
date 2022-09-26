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
//         escreval(nome, " você já pode votar")
//fimse
//se(idade < 16) entao
//         escreval(nome, " você não pode votar")
//fimse

//Estrutura condicional composta
//se(idade >= 16) entao
//           escreval(nome, " você já pode votar")
//         senao
//           escreval(nome, " você não pode votar")
//fimse

//Estrutura condicional encadeada
    se (idade >= 18) entao
       escreval(nome, " você pode votar")
     senao
       se (idade >= 16) e (idade < 18 ) entao
         escreval(nome, " você pode votar mas, não é obrigatório")
          senao
           escreval(nome, " você não pode votar")
       fimse
    fimse

Fimalgoritmo