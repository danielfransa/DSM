Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2022
Var
var1 : logico
var2 : logico
var3 : logico
var4 : logico
var5 : logico
valor : inteiro

Inicio
valor:= 0
var1 := falso
var2 := verdadeiro
var3 := verdadeiro
var4 := falso
var5 := falso
      se n�o(var1 ou var2) e (n�o(var3 e n�o(var4)) ou var5) ent�o
      valor := 1
       sen�o se (var1 e var3) ent�o
       valor := 2
        sen�o se (var2 ou var4) ent�o
        valor := 3
         sen�o se n�o(var3) ent�o
         valor := 4
          sen�o valor:= 5
          fimse
         fimse
         fimse
       fimse
       fimse
       




Fimalgoritmo