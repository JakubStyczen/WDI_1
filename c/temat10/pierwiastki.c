//skonczone
#include <stdio.h>
#include <math.h>

int  kwadratowa(float a, float b, float c, float *p1, float *p2)
{
   float delta;
   delta = (b*b)-(4*a*c);
   if(delta ==0)
   {
       *p1 = (-b/(2*a));
       
       return 1;
   }else if (delta > 0)
   {
     *p1 = (-b-sqrt(delta))/(2*a);
     *p2 = (-b+sqrt(delta))/(2*a); 
      return 2;
   }else return 0 ;
}

int main(){
    float a,b,c,x1,x2;
    printf("Podaj wspolczynnik a: \n");
    scanf("%f", &a);
    printf("Podaj wspolczynnik b: \n");
    scanf("%f", &b);
    printf("Podaj wspolczynnik c: \n");
    scanf("%f", &c);
    int res = kwadratowa(a,b,c, &x1, &x2);
    if(res ==2)
    {
        printf("x1: %f x2: %f ", x1, x2);
    }else if(res == 1)
    {
       printf("x1: %f ", x1); 
    }else if(res == 0)
    {
        printf("Brak miejsc zerowych");
    }
    return 0;
}
