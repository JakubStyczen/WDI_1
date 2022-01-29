//skoczone
#include <stdio.h>
#define SIZE 100

int main(){
    FILE* plik = fopen("input.txt", "r");
    if(plik==NULL){
        return 1;
        
    }
    FILE* zapis = fopen("output.txt", "w");
    if(zapis==NULL){
        fclose(plik);
        return 1;
        
    }
    char znak;
    while((znak=fgetc(plik))!=EOF){
        fputc(znak, zapis);
    }
    fputc('\n', zapis);

    rewind(plik);
    
    char zdanie[SIZE];
    while(fgets(zdanie, SIZE, plik)!=NULL){
        fputs(zdanie, zapis);
    }
    

    
    fclose(plik);
    fclose(zapis);
    return 0;
}
