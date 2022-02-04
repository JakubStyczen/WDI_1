#skonczone

def konwersja(liczba):
    odpowiedniki = {
    'dwadzieścia': 20,
    'trzydzieści': 30,
    'czterdzieści': 40,
    'pięćdziesiąt': 50,
    'jeden': 1,
    'dwa': 2,
    'trzy': 3,
    'cztery': 4,
    'pięć': 5,
    'sześć': 6,
    'siedem': 7,
    'osiem': 8,
    'dziewięć': 9
    }
    slownie = liczba.split(' ')
    calkowita = 0
    for slowo in slownie:
        calkowita += odpowiedniki[slowo]
    return calkowita

print(konwersja('pięćdziesiąt trzy'))
