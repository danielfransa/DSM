Algoritmo "CalcularIMC"
//Desenvolva um programa usando o  Visualg  para  calcular  o  �ndice  de massa
//corp�rea  (IMC)  de  um  paciente.  Ser�o  necess�rios  as  seguintes entradas
//de dados:
Var
id:inteiro
nome, class:caracter
altura, peso, imc:real

Inicio

escreval("Informe seu c�digo:")
leia(id)

escreval("Informe seu nome:")
leia(nome)

escreval("Informe sua Altura:")
leia(altura)

escreval("Informe seu peso:")
leia(peso)

    IMC:= peso / (altura * altura)
    
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
                            class:= "Obesidade Grau III (Obesidade Grave ou M�rbida)"
                        fimse
                    fimse
                fimse
            fimse
    Fimse
    
    escreval("Ol� ", nome, "!")
    escreval("Seu IMC �: ", IMC:3:2)
    escreval("E sua classifica��o �: ", class)


Fimalgoritmo