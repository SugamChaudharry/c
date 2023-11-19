/*
   one big difference is that do while loop run atlest one time were while loop only run if condition is true

   2ed is syntax in 

   do while loop

        do{

        }while(condition)

   while loop 

        while(condition)
        {

        }
*/

#include <stdio.h>

int main(){
    int a=0,b=1,c,n,i = 0;
    scanf("%d",&n);
    printf("%d\t%d\t", a,b);
    while (i<n-2)
    {
        c = a+b;
        printf("%d\t", c);
        a = b; 
        b = c;
        i++;
    }
}
