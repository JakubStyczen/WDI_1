#skończone
książka = {('Jan', 'Kowalski'):"123456789",
            ('Adam', 'Nowak'):"987654321" , 
            ('Adam', 'Kowalski'): "600300900"
            } 
            
print(książka[('Jan', 'Kowalski')])

def wypisz_numer(parametr):
    lista_numerów = []
    for keys in książka:
        if keys[1] == parametr:
            lista_numerów.append(książka[keys])
    return lista_numerów
        
print(wypisz_numer('Kowalski'))
