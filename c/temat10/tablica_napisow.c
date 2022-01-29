#include <stdio.h>
#include <string.h>


void sort(char *tab[], int size){

    for (int zew = size; zew>0 ;zew--)
    {
        for (int wew=0; wew<zew; wew++)
        {
            if(strcmp(*tab[wew], *tab[wew+1])>0)
            {
                char* pomocnicza = tab[wew];
                tab[wew] = tab[wew + 1];
                tab[wew + 1] = pomocnicza;
            }
        }
    }
}


int main(){
    char *tab[5] = {"Kot ma Ale", "Ala ma kota", "Ola ma psa", "Pies ma pchly", "Ala nie lubi Oli"};
    
    sort(tab,5);
    
    for(int i=0;i<5;i++)
    {
        puts(tab[i]);
    }
    return 0;
}


