Algoritmo "exe4"
//Elabore um algoritmo que calcule o gasto de um fumante. O Algoritmo
//dever� solicitar a quantidade de cigarros consumidos diariamente,
//o valor do ma�o (20 cigarros) e o tempo (em anos) como fumante e
//apresentar o valor total gasto durante esse per�odo.
Var
quant_cigarro:inteiro
valor_maco:real
temp:inteiro
valor1cigarro:real
diasfumo:inteiro
gastos:real


Inicio
escreval("Quantos cigarros voc� fuma por dia")
leia(quant_cigarro)

escreval("Quanto custa um ma�o do seu cigarro favorito")
leia(valor_maco)

escreval("A quantos anos voc� fuma")
leia(temp)

    valor1cigarro:= valor_maco / 20
    
    diasfumo:= temp * 365
    
    gastos:= quant_cigarro * diasfumo * valor1cigarro
    
escreval("Seus gastos com cigarro foram de R$ ", gastos:6:2)


Fimalgoritmo