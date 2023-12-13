#include <stdio.h>

int main(){
    int arr[6],odd=0,even=0;

    printf("Enter a number: ");
    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("odd = %d\n",arr[i]);
            odd++;
        }
        else {
            printf("Even = %d\n",arr[i]);
            even++;
        }
        
    }

}