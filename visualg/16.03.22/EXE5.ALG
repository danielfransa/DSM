Algoritmo "exe5"
//Elabore um algoritmo que leia dois valores e armazene nas variaveis
//A e B respectivamente. Depois efetue a troca dos valores de forma
//que a variavel A passe a ter o valor de B e a variavel B passe a ter
//o valor de A. Apresente os valores após realizar a troca.
Var
A:inteiro
B:inteiro
C:inteiro



Inicio
Escreval("Esceva o Valor de A:")
leia(A)

Escreval("Esceva o Valor de B:")
leia(B)

       C:=A
       A:=B
       B:=C

escreval("o Valor de A é: ", A)
escreval("o Valor de B é: ", B)

Fimalgoritmo