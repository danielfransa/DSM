Algoritmo "Piscina"
//
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

escreval("Informe codigo do estilo de Nata��o:")
escreval("1 - Nado Livre")
escreval("2 - Nado de Costas")
escreval("3 - Nado Borboleta")
leia(estilo)

    idade:= ano_atual - ano_nascimento

escreval(nome)
escreval("Sua Idade atual �: ", idade)
    
    se (idade <=16)e (estilo =1) entao
    escreval("Voc� deve ir para Picina 1")
    senao
            se (idade > 16) e (estilo =1) entao
            escreval("Voc� deve ir para Picina 5")
            senao
                se (idade <= 21) e (estilo =2) entao
                escreval("Voc� deve ir para Picina 2")
                senao
                    se (idade > 21) e (estilo =2) entao
                    escreval("Voc� deve ir para Picina 3")
                    senao
                         se (idade <=  12) e (estilo =3) entao
                         escreval("Voc� deve ir para Picina 4")
                         senao
                              se (idade >= 12) e (estilo =3) entao
                              escreval("Voc� deve ir para Picina 6")
                              senao
                              escreval("Estilo N�o encontrado")
                              fimse
                        fimse
                    fimse
                fimse
            fimse
    Fimse

Fimalgoritmo