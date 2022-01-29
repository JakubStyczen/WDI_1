// skonczone
#include <stdio.h>
#define ROW 3
#define COL 2


int main(){
    int tab1[ROW][COL] = {{1,2}, {3,4}, {5,6}};
    int tab2[ROW][COL] = {{6,7}, {8,9}, {10,11}};
    int tab3[ROW][COL];
    
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            tab3[i][j] = tab1[i][j] + tab2[i][j];
        }
    }
    
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d ", tab3[i][j]);
        }
        printf("\n");
    }
}
