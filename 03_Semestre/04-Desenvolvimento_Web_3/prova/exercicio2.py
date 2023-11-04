def  concatenar_lista(lista1, lista2):

    if not isinstance(lista1, list) or not isinstance(lista2, list):
        raise TypeError("Ambos os pârametros devem ser listas")
    
    resultado = lista1 + lista2

    return resultado