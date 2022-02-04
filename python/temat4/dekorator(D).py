#skończone
import time

def ile_czasu(func):
    
    def czas(*args):
        przed = time.process_time()
        x = func(*args)
        po = time.process_time()
        print(f'Czas wykonania funckji: {po-przed}')
        return x

        
    return czas
        
@ile_czasu
def wspolne(sekwencja1, sekwencja2):
    return set([element for element in sekwencja1 for cos in sekwencja2 if element == cos])

def main():
    

    print(wspolne(['kox', 'lol', 'gg'], ['kox', 'hhhh', 'acac', 'gg', 'UUU', 'gg']))
    print(wspolne('asdjhasdak', 'andhaksdadhahck'))
    print(wspolne((1, 3, 4, 5), (5, 7 ,8, 1)))

if __name__ == '__main__':
    main()
