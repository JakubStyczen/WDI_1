#skończone
def newton(n, k):
    if k<0 or k>n or n<0:
        return None
    if k==0 or k==n:
        return 1
    return newton(n-1, k-1)+ newton(n-1, k)
    
def main():
    print(newton(5,1))

if __name__ == '__main__':
    main()
