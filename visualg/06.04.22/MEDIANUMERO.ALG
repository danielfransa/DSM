Algoritmo "Medianumero"
//Recebe uma quantidade de numero e retorna a média desse valor
Var
n1, n2, s : inteiro
m : real

Inicio
N2 := 1
  Enquanto (n2 < 51) faça
     Escreval("Digite o número", n2, "/50")
     leia(n1)
     s:= s + n1
     n2:= n2 +1
  fimenquanto
      escreval("A soma dos números é: ", s)
      m := s / (n2-1)
      escreval ("A média dos números é: ", m)
Fimalgoritmo