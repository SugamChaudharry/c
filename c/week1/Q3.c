#include <stdio.h>

int main() {
    int marks1, marks2, marks3, lowestMarks;
    
    printf("Enter marks for student 1: ");
    scanf("%d", &marks1);
    
    printf("Enter marks for student 2: ");
    scanf("%d", &marks2);
    
    printf("Enter marks for student 3: ");
    scanf("%d", &marks3);
    
    lowestMarks = (marks1 < marks2) ? ((marks1 < marks3) ? marks1 : marks3) : ((marks2 < marks3) ? marks2 : marks3);
    
    printf("The lowest marks among the three students are: %d\n", lowestMarks);
    
    return 0;
}
