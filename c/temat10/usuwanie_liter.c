// skonczone
#include <stdio.h>

void usun_znak(char *napis, char znak)
{
    for(int i=0; napis[i]!='\0';i++)
    {
        if(napis[i]==znak)
        {
            for(int j=i; napis[j]!='\0';j++)
            {
                napis[j]=napis[j+1];
            }
            if(napis[i]==znak)
            {
                usun_znak(napis+i, znak);
            }
        }
    }
}


int main(){
    char tekst[] = "Zawansowane techniki programowania ";
    usun_znak(tekst, 'a');
    puts(tekst);
    
}
