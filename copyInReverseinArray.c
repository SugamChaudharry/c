#include <stdio.h>

int main(){
    int arr1[] , arr2[];
    for(int i = 0 ; i < 7 ; i++ )
        scanf("%d",&arr1);
    for(int i = 6, j = 0 ; i >= 0 ; i-- , j++){
        arr2[j] = arr1[i];
    }
    for(int i = 0 ; i < 7 ; i++){
        printf("arr2 = %d",arr2[i]);
    }
}