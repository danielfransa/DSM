Algoritmo "estruturaenquanto2"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
//Repetir a estrututa até que o usuário interompa
Var
nome, resp : caracter


Inicio
      resp := "S"
  escreval("Me diga seu nome")
  leia(nome)

  enquanto (maiusc(resp) = "S" ) FACA

    escreval("Olá ", nome)
    escreval("Deseja continuar (S/N)?")
    leia(resp)

  fimenquanto

  escreval("Obrigado por usar meu algoritmo")



Fimalgoritmo