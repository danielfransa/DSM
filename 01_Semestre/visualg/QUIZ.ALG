Algoritmo "quiz"
//Treinando: Fazer um quiz com 10 perguntas sobre um tema alea�rio
//com 3 op��es e uma verdadeira
Var
// Se��o de Declara��es das vari�veis 
resp1: inteiro
resp2: inteiro
resp3: inteiro
resp4: inteiro
resp5: inteiro
resp6: inteiro
resp7: inteiro
resp8: inteiro
resp9: inteiro
resp10: inteiro
nota: inteiro
erro: inteiro

Inicio
nota := 0
erro <- 0


escreval("1- Quantos Anos tem a Rainha da Inglaterra?")
escreval("1- Muito +")
escreval("2- 95 Anos")  //*
escreval("3- +3000")
leia(resp1)
se (resp1=2) ent�o
 nota := nota + 1
 sen�o
 erro := erro + 1
 fimse

escreval("2- Quem descobriu o Brasil")
escreval("1- Pedro Alvares Cabral")  //*
escreval("2- Dom Pedro I")
escreval("3- Ana Maria Braga")
leia(resp2)
se (resp2=1) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("3- Quem foi o primeiro Presidente do Brasil")
escreval("1- Lula")
escreval("2- Collor")
escreval("3- Deodoro da Fonseca")   //*
leia(resp3)
se (resp3=3) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("4- Quantos Anos tem Silvio Santos?")
escreval("1- +3000")
escreval("2- 91 Anos")   //*
escreval("3- 40 Anos")
leia(resp4)
se (resp4=2) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("5- Qual o nome do S�rgio Mallandro?")
escreval("1- S�rgio Neiva Cavalcanti")  //*
escreval("2- S�rgio Camargo Correia")
escreval("3- Edmarcio Cardoso da Silva")
leia(resp5)
se (resp5=1) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("6- Quem � o homem mais rico do mundo em 2022?")
escreval("1- Bernard Arnault")
escreval("2- Elon Musk")          //*
escreval("3- Jeff Bezos")
leia(resp6)
se (resp6=2) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("7- 1+1 � igual �?")
escreval("1- Depende")
escreval("2- 3")
escreval("3- 2")    //*
leia(resp7)
se (resp7=3) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("8- Quanto pesa 1Kg?")
escreval("1- 1.000.000.000 �g")   //*
escreval("2- 1 Litro")
escreval("3- 2 Libras")
leia(resp8)
se (resp8=1) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("9- Quantas luas tem Marte?")
escreval("1- 3")
escreval("2- 2") // *
escreval("3- 1")
leia(resp9)
se (resp9=2) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse

escreval("10- Qual o �ltimo time Sul Americano campe�o mundial pela FIFA?")
escreval("1- S�o Paulo")
escreval("2- Internacional")
escreval("3- Corinthians") // *
leia(resp10)
se (resp10=3) ent�o
 nota := nota + 1
  sen�o
 erro := erro + 1
 fimse
 
 Escreval ( "Voc� teve: " ,nota, " acertos e ", erro, " Erros" )

Fimalgoritmo