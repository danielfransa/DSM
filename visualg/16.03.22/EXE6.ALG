Algoritmo "exe6"
// Elabore um algoritmo que leia 4 notas de um aluno, calcule a media
//e apresente a mensagem "APROVADO" se a media for maior ou igual a 6.
Var
nota1, nota2, nota3, nota4, media:real

Inicio
escreval("Insira a sua 1� nota:")
leia(nota1)

escreval("Insira a sua 2� nota:")
leia(nota2)

escreval("Insira a sua 3� nota:")
leia(nota3)

escreval("Insira a sua 4� nota:")
leia(nota4)

media:= (nota1 + nota2 + nota3 + nota4) / 4

se media >= 6 entao
    escreval("Voc� esta APROVADO")
    senao
    escreval("Voc� foi REPROVADO")
FIMSE



Fimalgoritmo