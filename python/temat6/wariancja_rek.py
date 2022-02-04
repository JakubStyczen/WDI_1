#skończone
def wariancja(lista,dl, acc=0):
    if len(lista) >= 1 :
        war = wariancja(lista[1:], dl, acc+lista[0])
        
        return (war[0], war[1] + (1/(dl-1))*(war[0]-lista[0])**2)
        
    else: 
        return (acc/dl,0)

    

def main():
    lst=  [3,3,3,3]
    lst2 = [5,6,7,8,9]
    print(wariancja(lst,len(lst)))
    print(wariancja(lst2,len(lst2)))

    
if __name__ == '__main__':
    main()
