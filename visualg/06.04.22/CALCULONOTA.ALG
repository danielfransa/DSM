Algoritmo "calculonota"
//Recebe uma quantidade de numero e retorna a m�dia desse valor
Var
n1, n2, s : inteiro
m : real
resp : caracter

Inicio
N2 := 0
resp:= "S"
  Enquanto (n1 <> -1) fa�a
     Escreval("Digite a nota:")
     leia(n1)
      se(n1<>-1)ent�o
       s:= s + n1
       n2:= n2 +1
      fimse
  fimenquanto
      escreval("A soma das notas �: ", (s))
      escreval("Foram digitadas", (n2)," notas")
      m := (s) / (n2)
      escreval ("A m�dia das Notas �: ", m)
Fimalgoritmo