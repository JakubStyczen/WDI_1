#skończone
def lata(od, do):
   return [rok_przestępny for rok_przestępny in range(od, do+1) if ((rok_przestępny%4 ==0) and (rok_przestępny%10!=0)) or (rok_przestępny%400==0)] 

def main(): 
    print(lata(1900, 2000))
    
if __name__ == '__main__':
    main()
