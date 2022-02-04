#nie_Skończone
def binarna(liczba):
    if liczba < 0:
        return None
    if liczba==0 or liczba==1:
        return str(liczba)
    if liczba == 2:
        return '01'
    if liczba%2:
        if liczba-2 > 0:
            return '0' + binarna(liczba-2)
        else: 
            return '0'
    else: 
        if liczba-2 > 0:
            return '1' + binarna(liczba -2)
        else: 
            return '1'
        
print(binarna(5))
print(binarna(3))
