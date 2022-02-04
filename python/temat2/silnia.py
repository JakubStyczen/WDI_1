#skonczone
while True:
    ilosc = int(input('Podaj silnię do wyliczenia: '))
    
    if ilosc == 0 or ilosc ==1:
        print('Wprowadzona silnia jest równa 1.')
        break
    else:
        silnia = 1
        while ilosc >0:
            silnia *= ilosc
            ilosc -= 1
        print(f'Wprowadzona silnia jest równa: {silnia}')
