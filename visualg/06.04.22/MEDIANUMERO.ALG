Algoritmo "Medianumero"
//Recebe uma quantidade de numero e retorna a m�dia desse valor
Var
n1, n2, s : inteiro
m : real

Inicio
N2 := 1
  Enquanto (n2 < 51) fa�a
     Escreval("Digite o n�mero", n2, "/50")
     leia(n1)
     s:= s + n1
     n2:= n2 +1
  fimenquanto
      escreval("A soma dos n�meros �: ", s)
      m := s / (n2-1)
      escreval ("A m�dia dos n�meros �: ", m)
Fimalgoritmo