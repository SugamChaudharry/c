# include <stdio.h>
int main(){
    // int Seprate();
    int Seprate(){
        int num, sapDig;
        scanf("%d",&num);
            while (num >0)
            {
                sapDig= num%10;
                printf("%d", sapDig);
                num /= 10;
            }

    }
    Seprate();
}