#skonczone

rzym = {'M':1000, 
        'CM':900, 
        'D':500, 
        'CD':400, 
        'C':100, 
        'XC':90, 
        'L':50, 
        'XL':40, 
        'X':10, 
        'IX':9, 
        'V':5, 
        'IV':4, 
        'I':1 }
        
def iteracyjnie(liczba):
    suma = 0
    while len(liczba)>0:
        if liczba[0:2] in rzym:
            suma+= rzym[liczba[0:2]]
            liczba = liczba[2:]
        else:
            suma += rzym[liczba[0]]
            liczba = liczba[1:]
    return suma
    
    
    
def ogonowa(liczba, suma=0):
    if len(liczba) <= 0:
        return suma
    
    if liczba[0:2] in rzym:
        return ogonowa(liczba[2:], suma + rzym[liczba[0:2]])
    else:
        return ogonowa(liczba[1:], suma + rzym[liczba[0]])



def rekurencyjnie(liczba):
    if len(liczba) <= 0:
        return 0
        
    if liczba[0:2] in rzym:
        return rzym[liczba[0:2]] + rekurencyjnie(liczba[2:])
    else:
        return rzym[liczba[0]] + rekurencyjnie(liczba[1:])


def main():
    print(iteracyjnie('XIX'))
    print(ogonowa('XIX'))
    print(rekurencyjnie('XIX'))
    

if __name__ == '__main__':
    main()
    
