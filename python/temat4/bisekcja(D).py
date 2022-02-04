#skonczone
import math

def wielomian(x):
    return x**3-2*x**2+4*x-1

def bisekcja(f, x1, x2, eps):
    while abs(x1-x2)>eps:
        miejsce_zerowe = (x1+x2)/2
        if abs(f(miejsce_zerowe))<eps:
            break
        elif f(miejsce_zerowe)*f(x1)<0:
            x2 = miejsce_zerowe
        else:
            x1 = miejsce_zerowe
    
    return ((x1+x2) /2)
 
print(bisekcja(math.sin, -1.5, 1, 0.001))
    
print(bisekcja(wielomian, -10, 10, 0.001))
