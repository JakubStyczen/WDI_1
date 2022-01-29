//skonczone
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
    char stop = ' ', *tab=NULL;
    int i=0;
    while(stop!='.'){
        stop=' ';
        printf("Proszę podać znak ( . w celu zakończenia)\n");
        char znak = getchar();
        getchar();
        stop = znak;
        if(!(i % SIZE)){
                char *nowa = realloc(tab, (i+SIZE)*sizeof(znak));
                if(nowa!=NULL){
                    tab=nowa;
                }else{
                    return 1;
                }
            }
        if(tab!=NULL){
            tab[i]=znak;
            i++;
        }
        else{
            return 1;
        }
    }
    for (int i=0; tab[i]!='.';i++){
        printf("%c", tab[i]);
    }
    free(tab);
    
    
    return 0;
}
