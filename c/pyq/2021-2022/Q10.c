#include <stdio.h>

int main(){
    int n=5,pv=0;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            pv = (pv == 1)?0:1;
            printf("%d ",pv);
        }
        printf("\n");
    }
}