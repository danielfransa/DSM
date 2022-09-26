Algoritmo "Questão_7"
// Autor(a)    : Daniel França
// Data atual  : 13/04/2022
Var
volta : inteiro
tempo1 : inteiro
menor_volta : inteiro
num_mvolt : inteiro

Inicio

Escreval("Informe o Tempo da Volta em Segundos: Para Terminar informe 0")
leia(tempo1)
menor_volta := tempo1
volta := 1
num_mvolt := 1

 enquanto (tempo1 <> 0) faça
     Escreval("Informe o Tempo da Volta em Segundos: Para Terminar informe 0")
     leia(tempo1)
   se (tempo1 <> 0) então
     volta := volta + 1
      se tempo1 < menor_volta então
       menor_volta := tempo1
       num_mvolt := volta
      fimse
   fimse
 fimenquanto
 
 escreval("Foram completadas ", volta," voltas")
 escreval("A volta de menor tempo foi a Volta número: ",num_mvolt)
 escreval("O tempo da menor volta foi de: ", menor_volta, " segundos")

Fimalgoritmo