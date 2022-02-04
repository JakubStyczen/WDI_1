#skonczone

def srednia_wariancja(lista):
    dlugosc_listy = len(lista)
    suma = 0
    for el in lista:
        suma+=el
    srednia = suma/dlugosc_listy
    
    suma_wariancji = 0
    for el in lista:
        suma_wariancji += (el - srednia)**2
    
    wariancja = (1/(dlugosc_listy-1))*suma_wariancji
    
    return (srednia, wariancja)


drugie =srednia_wariancja([5,6,7,8,9])
pierwsze = srednia_wariancja([3,3,3,3])

print(f'Dla [3,3,3,3]' + '\n'+f'Śrendia wynosi: {pierwsze[0]}' + '\n' +f'Wariancja wynosi : {pierwsze[1]}')
print(f'Dla [5,6,7,8,9]' + '\n'+f'Śrendia wynosi: {drugie[0]}' + '\n' +f'Wariancja wynosi : {drugie[1]}')

