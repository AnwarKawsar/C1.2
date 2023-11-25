#include<stdio.h>
#include<stdbool.h>

int main(){
    float temp;
    bool n=true;
    
    printf("Enter temperature:\n");
    scanf("%f",&temp);
    


    if (temp>=0 && temp<=30 && n)
    {
        printf("The weather is good");
    }
    else{
        printf("\n The weather is bad!! ");
    }
    return 0;
}