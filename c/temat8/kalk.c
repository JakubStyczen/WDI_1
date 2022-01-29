// skonczone
#include <stdio.h>

int main()
{
    float liczba1, liczba2;
    char znak;
    printf("Podaj znak dzialania, liczbe, liczbe: \n");
    scanf("%c %f %f", &znak, &liczba1, &liczba2);
    switch(znak)
    {
        case '+':
            printf("Wynik to: %f", liczba1 + liczba2);
            break;
        case '-':
            printf("Wynik to: %f", liczba1 - liczba2);
            break;
        case '*':
            printf("Wynik to: %f", liczba1 * liczba2);
            break;
        case '/':
            if(liczba2 !=0)
            {
            printf("Wynik to: %f", liczba1 / liczba2);
            } else printf("NIE DZIEL PRZEZ 0");
            break;
        default :
            printf("Zly znak dzialania!");
            break;
            
    }
    return 0;
}
