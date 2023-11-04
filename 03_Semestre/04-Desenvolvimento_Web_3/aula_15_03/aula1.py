"""
def quebra_substring(string_maior, string_quebra=':'):
    return string_maior.split(string_quebra)

print(quebra_substring("oi:mundo:teste", ':'))

print(quebra_substring("oi:mundo:teste", ' '))

print(quebra_substring("oi:mundo:teste"))


def soma_tudo(numero1, numero2):
    return numero1 + numero2

print(soma_tudo(10, 20))

def soma_tudo(numero1, numero2, numero3=10):
    return numero1 + numero2 + numero3

print(soma_tudo(10,30))

print(soma_tudo(10,30,2))

def soma_tudo(*numeros):
    soma = 0
    for n in numeros:
        soma += n
    return soma

print(soma_tudo(10,30,2))
"""
def soma_tudo(*numeros):
    lista = []
    for n in numeros:
        if type(n) == int:
            lista.append(n)
    return sum(lista)

print(soma_tudo(10,30,2, "Ajsdnbv", []))

def soma_tudo(*numeros):
    resultado = 0
    for numero in numeros:
        if isinstance(numero, int):
            resultado += numero
    return resultado

print(soma_tudo(10,30,2, "Ajsdnbv", []))

def mostrar_parametro(**kwargs):
    print(kwargs)

print(mostrar_parametro(parametro1 = "bla", parametro2 = "bleng"))
