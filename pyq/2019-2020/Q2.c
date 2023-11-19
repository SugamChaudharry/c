#include <stdio.h>
int main(){
    int age, retire_age, date = 2023;
    printf("What is your current age? ");
    scanf("%d", &age);
    printf("What age you whant to retire? ");
    scanf("%d",&retire_age);
    int time = retire_age - age;

    printf("you have %d year left until you can retire.\n",time);
    printf("so you will retire in %d" , date + time );
}