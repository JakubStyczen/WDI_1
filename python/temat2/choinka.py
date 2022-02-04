#skonczone

wys = int(input('Podaj wysokosc choinki: '))


for j in range(1, wys+1):
    for k in range(wys-1):
        print('', end=" ")
    for i in range(2*j -1):
        print('*', end="")
    print('')
    
        
    
    wys -= 1
