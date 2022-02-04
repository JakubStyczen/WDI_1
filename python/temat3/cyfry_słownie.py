#skończone

def zmiana_napisu(liczba):
    
    oznaczenia = {
        "0":"zero ",
        "1":"jeden ", 
        "2":"dwa ", 
        "3":"trzy ",
        "4":"cztery ",
        "5":"pięć ",
        "6":"sześć ",
        "7":"siedem ",
        "8":"osiem ",
        "9":"dziewięć ",
    }
    
    liczba_słownie = ''
    
    for litera in liczba:
        if litera in oznaczenia:
            liczba_słownie += oznaczenia[litera]
        
    return liczba_słownie
    
print(zmiana_napisu('1510'))
