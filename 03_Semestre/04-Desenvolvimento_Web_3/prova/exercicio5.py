def gerar_lista_cidades(lista):
    cidades = []
    for elemento in lista:
        codigo, cidade = elemento.split(':')
        cidades.append(cidade.strip())
    return cidades


def gerar_lista_cidades(lista):
    cidades = []
    for item in lista:
        cidade = item.split(':')[1].strip()
        cidades.append(cidade)
    return cidades