Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
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
   se z <= 0 ent�o
       resposta := "A"
   sen�o
      se (z <= 100) ent�o
          resposta := "B"
      sen�o
          resposta := "C"
      fimse
   fimse
   escreval(z)
   escreval(resposta)


Fimalgoritmo