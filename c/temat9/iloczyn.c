// skonczone
#include <stdio.h>

double skalarny(double *tab1, double *tab2, int size)
{
    double wynik=0;
    for(int i=0;i<size;i++)
    {
       wynik += (tab1[i]*tab2[i]);
    } 
    return wynik;
    
}

int main()
{
    double tab1[] = {1.0,2.0,3.0,4.0,5.0};
    double tab2[] = {6.0,7.0,8.0,9.0,10.0};
    double tab3[] = {0.0,2.0,3.0};
    double tab4[] = {0.0,7.0,0.0};
    printf("Pierwszy iloczyn: %lf\n", skalarny(tab1, tab2, 5));
    printf("Drugi iloczyn: %lf", skalarny(tab3, tab4, 3));
    return 0;
}
