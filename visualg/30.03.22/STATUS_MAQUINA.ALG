Algoritmo "Status_maquina"

Var
nome, resultado: caracter
id, p1, p2: inteiro
taxa_def: real


Inicio
escreval("Informe seu nome:")
leia(nome)

escreval("Informe o c�digo da m�quina:")
leia(id)

escreval("Informe o total de pe�as produzias:")
leia(p1)

escreval("Informe o total de pe�as defeituosas")
leia(p2)

        taxa_def := (p1*0.10)
        
        se(p2 > taxa_def) ent�o
              resultado := ("A m�quina precisa de manuten��o")
              senao
              resultado := ("A m�quina esta funcionando perfeitamente")
        fimse

escreval ("Seu nome �: ", nome)
escreval ("O c�digo da m�quina �: ", id)
escreval (resultado)

        



Fimalgoritmo