Algoritmo "questão_5"
// Autor(a)    : Daniel França
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
escreval("Informe o tempo de serviço em anos:")
leia(anos_servicos)
escreval("Informe a quantidade de filhos:")
leia(filhos)

//bonus idade
   se(idade > 45) então
      id_bonus := idade - 45
      bonus_idade := (id_bonus * 5)
     senão
      bonus_idade := 0
   fimse
//bonus_Tempo_serviço
   se (anos_servicos > 10) então
       a1 :=  10 * 10
       anos_acima10 := anos_servicos - 10
       a2 := anos_acima10 * 20
       bonus_servico := a1 + a2
     senão
       bonus_servico := anos_servicos * 10
   fimse
//bonus_filhos
    se(filhos > 3) então
        bonus_filhos := 75
      senão
        bonus_filhos := filhos * 25
    fimse
    
   soma_bonus:= bonus_idade + bonus_servico + bonus_filhos)

escreval("Seu bônus por idade é: R$",bonus_idade)
escreval("Seu bônus de tempo de serviço é: R$",bonus_servico)
escreval("Seu bônous por número de filhos é: R$",bonus_filhos)
escreval("A soma dos seus bônus é: R$",soma_bonus)


Fimalgoritmo