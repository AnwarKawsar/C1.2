#include<stdio.h>
#include<string.h>
int factor(int n){
    int factor_result=1;
    for(int i=1;i<=n;i++){
        factor_result*=i;
    }
    return factor_result;
} 
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    int factorial=factor(number);
    printf("%d",factorial);
    return 0;
}