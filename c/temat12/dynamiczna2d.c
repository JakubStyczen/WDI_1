//skonczone
#include <stdio.h>
#include <stdlib.h>


void deleteMatrix(float*** a_tab, int w){
    for (int i=0; i<w;i++){
        free((*a_tab)[i]);
    }
    
    free(*a_tab);
    *a_tab =  NULL;
}

float** createMatrix(int w, int k){
    float **ptr;
    ptr = malloc(w* sizeof(float*));
    if(ptr==NULL){
        return NULL;
    }
    for(int i=0;i<w;i++){
        float *kol;
        kol=malloc(k*sizeof(float));
        if(kol==NULL){
            deleteMatrix(&ptr, i);
            return NULL;
        }
        ptr[i]=kol;
    }
    return ptr;
    
    
}

void fillMatrix(float** tab, int w, int k){
    float licznik = 1;
    for(int i =0;i<w;i++){
        for(int j=0;j<k;j++){
            tab[i][j]= licznik;
            licznik++;
        }
    }
}

void printMatrix(float** tab, int w, int k){
    for(int i =0;i<w;i++){
        for(int j=0;j<k;j++){
            printf("%f " ,tab[i][j]);
        }printf("\n");
    }
}



int main(){
    float** tab2D;
    tab2D=createMatrix(2,3);
    if(tab2D==NULL){
        return 1;
    }
    fillMatrix(tab2D, 2,3);
    printMatrix(tab2D, 2,3);
    deleteMatrix(&tab2D, 2);
    return 0;
}
