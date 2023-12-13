#include <stdio.h>

int main(){
    int arr1[7] , arr2[7];
    for(int i = 0 ; i < 7 ; i++ )
        scanf("%d",&arr1[i]);
    for(int i = 6, j = 0 ; i >= 0 ; i-- , j++){
        arr2[j] = arr1[i];
    }
    printf("arr2 = {");
    for(int i = 0 ; i < 7 ; i++){
        if (i == 6)
        {
            printf(" %d }",arr2[i]);
            break;   
        }
        printf(" %d ,",arr2[i]);
    }
}