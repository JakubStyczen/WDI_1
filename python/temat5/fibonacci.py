#skonczone
def fib(n):
    if n<0:
        return None
    if n== 1 or n==0:
        return n
    return fib(n-1)+fib(n-2)
    
    
    

def main():
    print(fib(3))
    
if __name__ == "__main__":
    main()
