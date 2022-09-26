Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2022
Var
 x, y, z : inteiro
 resposta : caracter


Inicio
   escreval("diga valor de x")
   leia (x)
   escreval("diga valor de y")
   leia (y)
   z:= (x * y) + 5
   se z <= 0 então
       resposta := "A"
   senão
      se (z <= 100) então
          resposta := "B"
      senão
          resposta := "C"
      fimse
   fimse
   escreval(z)
   escreval(resposta)


Fimalgoritmo