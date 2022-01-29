//skonczone
#include <stdio.h>
#include <stdlib.h>

int *alokacja(int dl){
    int *ptr;
    ptr = malloc(dl*sizeof(int));
    if(ptr==NULL) return NULL;
    
    for(int i=0;i<dl;i++){
        ptr[i] = 2*(i+1)-1;
    }

    return ptr;
}


int main(){
    printf("Podaj rozmair tablicy: \n");
    int rozm, *ptr; 
    scanf("%d", &rozm);
    ptr = alokacja(rozm);
    if(ptr==NULL) return 1;
    
    for(int i=0;i<rozm;i++){
        printf("%d ", *(ptr+i));
    }
    free(ptr);
    ptr=NULL;
    return 0;
}
