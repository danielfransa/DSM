import pickle 
import csv
         
def extrair_chaves_dicionario(cidades):
    return list(cidades.keys())


def concatenar_listas(lista1, lista2):

    if not isinstance(lista1, list) or not isinstance(lista2, list):
        raise TypeError("Ambos os pârametros devem ser listas")

    return lista1 + lista2


def quebrar_string_em_listas(string_maior, string_quebra):
    return string_maior.split(string_quebra)


def gerar_lista_codigos(cidades):
    lista_codigo = []
    for item in cidades:
        codigo = item.split(":")[0]
        lista_codigo.append(codigo)
    return lista_codigo


def gerar_lista_cidades(cidades):
    lista_cidade = []
    for item in cidades:
        cidade = item.split(":")[1]
        lista_cidade.append(cidade)
    return lista_cidade

if __name__ == "__main__":
    with open('dados.bin', 'rb') as file:
        dados = pickle.load(file)
'''
    estados = extrair_chaves_dicionario(dados)
    lista_codigos_cidades = []
    lista_cidades = []
    for estado in estados:
        lista1 = gerar_lista_cidades(dados[estado])
        lista2 = gerar_lista_codigos(dados[estado])
        lista_cidades = concatenar_listas(lista_cidades, lista1)
        lista_codigos_cidades = concatenar_listas(lista_codigos_cidades, lista2)
'''
