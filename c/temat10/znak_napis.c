//skonczone
#include <stdio.h>
#define SIZE 5

char * znajdz_znak(char *napis, char szuk_znak)
{
    for(int i=0; napis[i]!='\0';i++)
    {
        if(napis[i] == szuk_znak)
        {
            return &napis[i]; 
        } 
    }
    return NULL;
    
}

int main(){
    char napis[SIZE];
    fgets(napis, SIZE, stdin);
    char*res;
    res=znajdz_znak(napis, 'a');
    if(res!=NULL)
    {
        printf("Pod zwrocnym adresem znajduje sie:  %c",*res);
    }else printf("Nie znaleziono znaku");

    
    
    return 0;
}
