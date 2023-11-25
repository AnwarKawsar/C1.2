#include<stdio.h>
int main(){
    int n[5]={1,4,3,2,5};
 for(int i=0;i<5;i++){
    printf("Enter a number:");
    scanf("%d",&n[i]);
 }
 int sum;
    for(int k=0;k<5;k++){
        sum+=n[k];
    }
printf("Sum is:%d\n",sum);
float avg=(float)sum/5;
printf("Average is:%f",avg);
return 0;
}