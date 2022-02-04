#skonczone
def fib_tail(n, fib0=0, fib1=1):
    if n == 0:
        return fib0
    elif n == 1:
        return fib1
    if n<0:
        return None
    return fib_tail(n-1, fib1, fib1+fib0)
    
    
    
    

def main():
    print(fib_tail(40))
    
if __name__ == "__main__":
    main()
