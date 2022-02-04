#nie_skończone


def quicksort(lista, p):
    mniejsze = []
    większe = []
    if len(lista) > 1:
        if lista[1]< lista[0]:
            mniejsze.append(lista[0])
            return quicksort(lista[1:], lista[0])
        else:
            większe.append(lista[0])
            return quicksort(lista[1:], lista[0])
    return mniejsze + [p] + większe
print(quicksort([7,6,9,3,1,5,7,12,8], 7))
        
