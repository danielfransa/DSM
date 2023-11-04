def gerar_lista_codigos(lista):
    codigos = []
    for item in lista:
        codigo = item.split(':')[0].strip()
        codigos.append(codigo)
    return codigos

def gerar_lista_codigos(lista):
    codigos = []
    for elemento in lista:
        codigo, cidade = elemento.split(':')
        codigos.append(codigo.strip())
    return codigos


