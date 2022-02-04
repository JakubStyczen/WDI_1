//skonczone
#include <stdio.h>
#include <stdlib.h>

int uncompress(double ** a_table, int *indexes, int size){
    int new_size = indexes[size-1]+1;
    double* ptr = calloc(new_size, sizeof(double));
    if(ptr==NULL){
        return 0;
    }
    int cnt = 0;
    for(int i=0;i<new_size ;i++){
        if(i==indexes[cnt]){
            ptr[i]=(*a_table)[cnt];
            cnt++;
        }    
    }
    free(*a_table);
    *a_table = ptr;
    return new_size;
}

int main(){
    double *wz=malloc(3*sizeof(double));
    if(wz==NULL){
        return 1;
    }
    wz[0] = 3.0;
    wz[1] = 1.0;
    wz[2] = 7.0;
    int ids[] = {2,5,8};
    int size = uncompress(&wz, ids, 3);
    if(wz==NULL){
        free(wz);
        return 1;
    }
    for(int i=0;i<size;i++){
        printf("%lf ", wz[i]);
    }
    free(wz);
    wz = NULL;
    return 0;
}
