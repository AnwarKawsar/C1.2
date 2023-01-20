#include<stdio.h>

int main(){
    char grade;
    printf("Enter your grade:\n");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("perfect!!");
        break;
    case 'B':
        printf("Very good!");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Poor");
        break;
    case 'F':
        printf("you failed!!!");
        break;
    default:
        printf("Enter a valid grade.");
        break;
    }
    return 0;
}