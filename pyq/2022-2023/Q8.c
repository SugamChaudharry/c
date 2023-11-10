#include <stdio.h>
#include <math.h>

int Armstrong(){
    int num,numCopy,suming = 0;
    printf("Enter a number :");
    scanf("%d",&num);
    numCopy = num;
    int a = log10(num)+1;
    for ( num ; num>0 ; num = num / 10)
    {
        int digites = num%10;
        int powering =  pow(digites, a);
        suming += powering ;
    }
    if(suming == numCopy){
        printf("%d is a arm strong number" , suming);
    }else{
        printf("not a arm strong number");
    }
};

//----------------------------------------------part 2 ---------------------------------------------------------

int fibonacci(){
    int fibNum , a=0 , b=1 , c;
    printf("Enter number for fibonacci siries : ");
    scanf("%d", &fibNum);
    printf("%d , %d" , a,b);
    for(int i = 2 ; i!=fibNum ; i+=1 , a = b , b = c)
    {
        c = a+b;
        printf(", %d",c);
    }
    
}


int main(){
    Armstrong();
    printf("\n");
    fibonacci();
};