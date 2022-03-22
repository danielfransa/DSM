Algoritmo "CalcularIMC"
//Desenvolva um programa usando o  Visualg  para  calcular  o  índice  de massa
//corpórea  (IMC)  de  um  paciente.  Serão  necessários  as  seguintes entradas
//de dados:
Var
nome:caracter
ano_atual, ano_nascimento, estilo, idade:inteiro


Inicio

escreval("Informe seu nome:")
leia(Nome)

escreval("Informe o ano de seu nascimento:")
leia(ano_nascimento)

escreval("Informe o ano atual:")
leia(ano_atual)

escreval("Informe codigo do estilo de Natação:")
escreval("1 - Nado Livre")
escreval("2 - Nado de Costas")
escreval("1 - Nado Borboleta")
leia(estilo)

    := peso / (altura * altura)
    
    se IMC < 18 entao
       class:= "Magreza"
       senao
            se (IMC = 18) ou (IMC < 25) entao
            class:= "Normal"
            senao
                se(IMC = 25) ou (IMC < 30) entao
                class:= "Sobrepeso"
                senao
                    se (IMC = 30) ou (IMC < 35) entao
                    class:= "Obesidade Grau I"
                    senao
                        se (IMC = 35) ou (IMC < 40) entao
                        class:= "Obesidade Grau II"
                        senao
                            class:= "Obesidade Grau III (Obesidade Grave ou Mórbida)"
                        fimse
                    fimse
                fimse
            fimse
    Fimse
    
    escreval("Olá ", nome, "!")
    escreval("Seu IMC é: ", IMC:3:2)
    escreval("E sua classificação é: ", class)


Fimalgoritmo