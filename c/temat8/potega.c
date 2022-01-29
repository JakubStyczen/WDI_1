//skoczone
#include <stdio.h>

double potega(double x, int wykladnik)
{
    double wynik;
    if (wykladnik < 0)
    {
        return 0;
    } else if( wykladnik == 0)
    {
        return wynik=1;
    } else 
    {
        wynik = x;
        while (wykladnik>0)
        {
            wynik *= x;
            wykladnik--;
        }
        return wynik;
        }
}

int main()
{
    printf("3 do 2 %lf\n", potega(3, 2));
    printf("2 do 2 %lf\n", potega(2, 2));
    printf("4 do 0 %lf\n", potega(4 ,0));
    return 0;
}

