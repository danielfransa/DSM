Algoritmo "Status_maquina"

Var
nome, resultado: caracter
id, p1, p2: inteiro
taxa_def: real


Inicio
escreval("Informe seu nome:")
leia(nome)

escreval("Informe o código da máquina:")
leia(id)

escreval("Informe o total de peças produzias:")
leia(p1)

escreval("Informe o total de peças defeituosas")
leia(p2)

        taxa_def := (p1*0.10)
        
        se(p2 > taxa_def) então
              resultado := ("A máquina precisa de manutenção")
              senao
              resultado := ("A máquina esta funcionando perfeitamente")
        fimse

escreval ("Seu nome é: ", nome)
escreval ("O código da máquina é: ", id)
escreval (resultado)

        



Fimalgoritmo