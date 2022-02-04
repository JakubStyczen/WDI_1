#skończone

def wspolne(sekwencja1, sekwencja2):
    return  list(set([element for element in sekwencja1 for cos in sekwencja2 if element == cos]))

def main():

    print(wspolne(['kox', 'lol', 'gg'], ['kox', 'hhhh', 'acac', 'gg', 'UUU', 'gg']))
    print(wspolne('asdjhasdak', 'andhaksdadhahck'))
    print(wspolne((1, 3, 4, 5), (5, 7 ,8, 1)))

if __name__ == '__main__':
    main()
