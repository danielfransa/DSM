Algoritmo "estruturaenquanto2"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
//Repetir a estrututa at� que o usu�rio interompa
Var
nome, resp : caracter


Inicio
      resp := "S"
  escreval("Me diga seu nome")
  leia(nome)

  enquanto (maiusc(resp) = "S" ) FACA

    escreval("Ol� ", nome)
    escreval("Deseja continuar (S/N)?")
    leia(resp)

  fimenquanto

  escreval("Obrigado por usar meu algoritmo")



Fimalgoritmo