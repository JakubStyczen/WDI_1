//skonczone
#include <stdio.h>
#include <stdlib.h>

int * compress(double ** a_table, int *a_size){
    int cnt, *ids;
    double *ptr;
    for(int i=0;i<*a_size;i++){
        if((*a_table)[i]!=0){
            cnt++;
        }
    }
    ids = calloc(cnt, sizeof(int));
    if(ids ==NULL){
        return NULL;
    }
    ptr = calloc(cnt, sizeof(double));
    if(ptr ==NULL){
        free(ids);
        return NULL;
    }
    cnt = 0;
    for(int i=0;i<*a_size;i++){
        if((*a_table)[i]!=0){
            ids[cnt]=i;
            ptr[cnt]=(*a_table)[i];
            cnt++;
        }
    }
    free(*a_table);
    *a_table = ptr;
    *a_size = cnt;
    
    return ids;
    
}

int main(){
    int size=10;
    double * tab = calloc(10, sizeof(double));
    if(tab==NULL){
        return 1;
    }
    
    tab[2]=3.0;
    tab[5]=1.0;
    tab[8]=7.0;
    
    for(int i=0; i<10;i++){
        printf("%lf ", tab[i]);
    }
    printf("\n");
    
    int*index = compress(&tab, &size);
    if(index == NULL){
        free(tab);
        return 1;
    }
    
    for(int i=0; i<3;i++){
        printf("%d ", index[i]);
    }
    printf("\n");
    for(int i=0; i<3;i++){
        printf("%lf ", tab[i]);
    }
    
    free(tab);
    free(index);
    tab=NULL;
    index=NULL;
    
    return 0;
}
