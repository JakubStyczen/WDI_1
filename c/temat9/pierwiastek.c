//skonczone

#include <stdio.h>
#include <math.h>

 

int main()
{
    double pierw;
    do{
        printf("Podaj liczbe: \n");
        scanf("%lf",&pierw );
        printf("Pierwiastek z podanej liczby to : %f\n", sqrt(pierw));
    }while (pierw != 0 && pierw != 1);
    
    return 0;
}
