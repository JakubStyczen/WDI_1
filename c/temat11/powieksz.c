//skonczone
#include <stdio.h>
#include <stdlib.h>

double * add(double* tab, int n, double new_elem){
    double *ptr;
    ptr = calloc(n+1,sizeof(double));
    if(ptr==NULL)return NULL;
    for(int i=0;i<n;i++){
        ptr[i]=tab[i];
    }
    ptr[n] = new_elem;
    free(tab);
    return ptr;
}

int main(){
    double *tablica = NULL;
    for(int i=0;i<10;i++){
        tablica = add(tablica, i,i);
        if(tablica==NULL){
            return 1;
        }
    }
    printf("Nowa tablica ma postać: \n");
    for(int i=0; i<10; i++){
        printf("%lf\n", tablica[i]);
    }
    free(tablica);
    tablica=NULL;
    return 0;
}
