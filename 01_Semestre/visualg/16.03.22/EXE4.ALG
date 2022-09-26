Algoritmo "exe4"
//Elabore um algoritmo que calcule o gasto de um fumante. O Algoritmo
//deverá solicitar a quantidade de cigarros consumidos diariamente,
//o valor do maço (20 cigarros) e o tempo (em anos) como fumante e
//apresentar o valor total gasto durante esse período.
Var
quant_cigarro:inteiro
valor_maco:real
temp:inteiro
valor1cigarro:real
diasfumo:inteiro
gastos:real


Inicio
escreval("Quantos cigarros você fuma por dia")
leia(quant_cigarro)

escreval("Quanto custa um maço do seu cigarro favorito")
leia(valor_maco)

escreval("A quantos anos você fuma")
leia(temp)

    valor1cigarro:= valor_maco / 20
    
    diasfumo:= temp * 365
    
    gastos:= quant_cigarro * diasfumo * valor1cigarro
    
escreval("Seus gastos com cigarro foram de R$ ", gastos:6:2)


Fimalgoritmo