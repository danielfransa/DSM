Algoritmo "exe3"
//Elabore um algoritmo que calcule o salario bruto de um professor.
//Para realizar o calculo será necessario ler o valor da hora aula e o
//numero de horas trabalhadas. Mostre o valor do salario bruto.

Var
valor_h_au:real
horas_trab:inteiro
salario:real


Inicio
escreval("Informe o Valor da horas aula")
leia(valor_h_au)

escreval("Informe quantas horas foram trabalhadas")
leia(horas_trab)

salario:= valor_h_au * horas_trab

escreval("Seu salário bruto será R$ ", salario:6:2)


Fimalgoritmo