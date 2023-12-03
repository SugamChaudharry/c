#include<stdio.h>

int oddNum(int a[],int n){
    int c = 0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            c++; 
        }
    }
    return c;

}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printf("%d",oddNum(a,n));
}