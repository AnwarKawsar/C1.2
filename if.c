#include<stdio.h>

int main(){

    int age;

    printf("Enter your age: \n");
    scanf("%d",&age);
    if(age >=18){
        printf("You are now signed in!!");
    }
    else{
        printf("You are too young to sign up.");
    }
    return 0;

}