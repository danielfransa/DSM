Algoritmo "calculonota"
//Recebe uma quantidade de numero e retorna a média desse valor
Var
n1, n2, s : inteiro
m : real
resp : caracter

Inicio
N2 := 0
resp:= "S"
  Enquanto (n1 <> -1) faça
     Escreval("Digite a nota:")
     leia(n1)
      se(n1<>-1)então
       s:= s + n1
       n2:= n2 +1
      fimse
  fimenquanto
      escreval("A soma das notas é: ", (s))
      escreval("Foram digitadas", (n2)," notas")
      m := (s) / (n2)
      escreval ("A média das Notas é: ", m)
Fimalgoritmo