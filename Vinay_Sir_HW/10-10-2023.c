# include <stdio.h>

int sum();
int length(int num);
int factor();
int perfectNo();
// int power();
// int product();
// int prime();
int fibonacci();


int main()
{
    int opration;
    char firstName;

    printf("write following text for opration given below; \n"
    "a         => to find sum of digit. \n"
    "b      => to find sum of digit. \n"
    "c   => to find sum of digit. \n"
    "d       => to find sum of digit. \n"
    "e     => to find sum of digit. \n"
    "f       => to find sum of digit. \n"
    "g   => to find sum of digit. \n"
    );
    scanf("%c", &firstName);
    switch (firstName)
    {
    case 'a':  sum();
        break;
    case 'b':  factor();
        break;
    case 'c':  perfectNo();
        break;
    case 'd':  printf("not a function");//power();
        break;
    case 'e'://product();
        break;
    case 'f':  printf("not a function");//prime();
        break;
    case 'g': fibonacci();
        break;
    default:printf("not yet");
        break;
    }
    return 0;
}
/*
Questions -:
Q1} w.a.p to find sum of digit's.
Q2} w.a.p to find factor.
Q3} w.a.p to check number is a perfect number or not a perfect number.
Q4} w.a.p to input a,b and calculate a power b without ussing ** opractor
Q5} w.a.p to a*b without using * opractor 
Q6} w.a.p to check prime number or not a prime number
Q7} w.a.p to print fibonacci of n terms
*/

// function for length
int length(int num){
    // int num;
    int i = 0;
    while (num>0)
    {
        i = i + 1;
        num /= 10;
    }
    int length = i;
    printf("%d", length);
}




//Q1} w.a.p to find sum of 
int sum(){
    int num;
    printf("enter a value \n");
    scanf("%d",&num);
    int sapDig , adding=0;
            while (num >0)
            {
                sapDig= num%10;
                adding += sapDig;
                num /= 10;
            }
    printf("%d", adding);
}

//Q2} w.a.p to find factor.
int factor(){
    int num;
    printf("Enter a number for factor : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            printf("%d ",i);
        }
        
    }
    
}
//Q3} w.a.p to check number is a perfect number or not a perfect number.
perfectNo(){
    
}
//Q7} w.a.p to print fibonacci of n terms
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