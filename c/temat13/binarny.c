//skonczone
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* plik = fopen("input.txt", "rb");
    if(plik==NULL){
        return 1;
        
    }
    FILE* zapis = fopen("output.txt", "wb");
    if(zapis==NULL){
        fclose(plik);
        return 1;
    }
    int dl;
    fseek( plik, 0, SEEK_END );
    dl =ftell( plik );
    
    rewind(plik);
    
    char*tab= malloc(dl*sizeof(char));
    if(tab==NULL){
        return 1;
    }
    fread(tab, sizeof(char), 100, plik);

    for(int i=0;i<3;i++){
        fwrite(tab, sizeof(char), dl,  zapis);
        fwrite("\n", sizeof(char), 1,  zapis);
    }
    memset(tab, 'A', dl);
    fseek(zapis,dl,SEEK_SET);
    fwrite("\n", sizeof(char), 1,  zapis);
    fwrite(tab, sizeof(char), dl, zapis);
    fwrite("\n", sizeof(char), 1,  zapis);
    
    
    fclose(plik);
    fclose(zapis);
    return 0;
}

