#skończone
import math

def derivative(f, x, h=0.0001):
    return (f(x+h)-f(x))/h
    
def kwadrat(x):
    return x**2

def main(): 
    print(derivative(math.sin, 1))
    print(derivative(math.sin, 0))
    print(derivative(kwadrat, 1, 0.00001))
    
if __name__ == '__main__':
    main()
