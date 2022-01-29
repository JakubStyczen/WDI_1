//skonczone
#include <stdio.h>
#define ROW1 2
#define ROW2 3
#define COL1 3
#define COL2 2


int main(){
    double tab1[ROW1][COL1] = {{1,2,3},{4,5,6}};
    double tab2[ROW2][COL2]  ={{1,2},{3,4},{5,6}};
    double tab3[ROW1][COL2];
    
    for(int i=0;i<ROW1;i++)
    {
        for(int j=0;j<COL2;j++)
        {
            double element_ij = 0; 
            for(int k=0; k<ROW2; k++)
            {
                element_ij = element_ij + tab1[i][k] * tab2[k][j];
            }
            tab3[i][j] = element_ij;
        }
    }
    for(int i=0;i<ROW1;i++)
    {
        for(int j=0;j<COL2;j++)
        {
            printf("%lf ", tab3[i][j]);
        }
        printf("\n");
    }
}
