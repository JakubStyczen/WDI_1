#skończone
def zwykla(lista):
    if len(lista)>=1:
        return lista[0]+ zwykla(lista[1:])
    else: 
        return 0
    
    
def ogonowa(lista, acc=0):
    if len(lista)>=1:
        return ogonowa(lista[1:], acc +lista[0])
    else: 
        return acc
    
def main():
    print(zwykla([]))
    print(zwykla([1,2,3,4]))
    print(ogonowa([1,2,3,4]))
    print(ogonowa([]))

if __name__ == "__main__":
    main()
