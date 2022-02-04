#skonczone

liczbowe = [(1,2),(3,4),(5,6),(7,8)]

text = [('a','b'), ('a','c'), ('b','c')]


def suma_krotek(lista):
    lista_sum = []
    for pojedyncza_krotka in lista:
        lista_sum.append(pojedyncza_krotka[0]+ pojedyncza_krotka[1])
    return lista_sum
    
    
print(suma_krotek(liczbowe), suma_krotek(text))
