Algoritmo "quest�o_5"
// Autor(a)    : Daniel Fran�a
// Data atual  : 13/04/2022
Var
idade: inteiro
id_bonus: inteiro
bonus_idade: real
anos_servicos: inteiro
a1 : real
a2 : real
anos_acima10: inteiro
bonus_servico:real
filhos: inteiro
bonus_filhos:real
soma_bonus: real


Inicio
escreval("Informe sua idade:")
leia(idade)
escreval("Informe o tempo de servi�o em anos:")
leia(anos_servicos)
escreval("Informe a quantidade de filhos:")
leia(filhos)

//bonus idade
   se(idade > 45) ent�o
      id_bonus := idade - 45
      bonus_idade := (id_bonus * 5)
     sen�o
      bonus_idade := 0
   fimse
//bonus_Tempo_servi�o
   se (anos_servicos > 10) ent�o
       a1 :=  10 * 10
       anos_acima10 := anos_servicos - 10
       a2 := anos_acima10 * 20
       bonus_servico := a1 + a2
     sen�o
       bonus_servico := anos_servicos * 10
   fimse
//bonus_filhos
    se(filhos > 3) ent�o
        bonus_filhos := 75
      sen�o
        bonus_filhos := filhos * 25
    fimse
    
   soma_bonus:= bonus_idade + bonus_servico + bonus_filhos)

escreval("Seu b�nus por idade �: R$",bonus_idade)
escreval("Seu b�nus de tempo de servi�o �: R$",bonus_servico)
escreval("Seu b�nous por n�mero de filhos �: R$",bonus_filhos)
escreval("A soma dos seus b�nus �: R$",soma_bonus)


Fimalgoritmo