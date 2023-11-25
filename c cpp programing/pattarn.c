#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    
    for(int i=1;i>=n;i++){
        for(int p=i;p>=0;i--){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}