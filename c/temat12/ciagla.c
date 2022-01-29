//skonczone
#include <stdio.h>
#include <stdlib.h>


void deleteContinousMatrix(double*** atab){
    free(*(*atab));
    free(*atab);
    *atab=NULL;
}

int createContinousMatrix(double*** atab, int n){
    *atab = malloc(n*sizeof(double*));
    if(*atab==NULL){
        return -1;
    }
    double *inter = malloc((n*n)*sizeof(double));
    if(inter==NULL){
        deleteContinousMatrix(atab);
    }
    
    for(int i=0;i<n;i++){
        (*atab)[i]=(inter+n*i);
    }
    
    
    return 0;
}

int copyMatrix(double*** pdest, double** src, int n){
    double** dest;
    double cor = createContinousMatrix(&dest,n);
    if(cor == -1){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dest[i][j]=src[i][j];
        }
    }
    *pdest = dest;
    return 0;
}

void fillMatrix(double** tab, int n){
    float licznik = 1;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]= licznik;
            licznik++;
        }
    }
}

void printMatrix(double** tab, int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%lf " ,tab[i][j]);
        }printf("\n");
    }
    printf("\n");
}

int main(){
    double** tab, **cptab;
    createContinousMatrix(&tab,3);
    if(tab == NULL){
        return 1;
    }
    fillMatrix(tab, 3);
    printMatrix(tab, 3);
    copyMatrix(&cptab,tab,3);
    if(cptab == NULL){
        deleteContinousMatrix(&tab);
        return 1;
    }
    printMatrix(cptab, 3);
    deleteContinousMatrix(&tab);
    deleteContinousMatrix(&cptab);
    return 0;
}
