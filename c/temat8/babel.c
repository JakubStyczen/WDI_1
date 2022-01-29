#include <stdio.h>
#define ROZMIAR 9


void sort(int tab[], int size){
    for (int zew = size; zew>0 ;zew--)
    {
        for (int wew=0; wew<zew; wew++)
        {
            if(tab[wew]> tab[wew+1])
            {
                int pomocnicza = tab[wew];
                tab[wew] = tab[wew + 1];
                tab[wew + 1] = pomocnicza;
            }
        }
    }
}

int main()
{
    int testowa[ROZMIAR]={7,6,9,3,1,5,7,12,8};

    sort(testowa,ROZMIAR);
    //wypisanie tablicy
    for (int i=0; i<ROZMIAR; i++){
        
        printf("%i ", testowa[i] );
    }
    return 0;
}
