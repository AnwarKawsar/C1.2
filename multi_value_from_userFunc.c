#include<stdio.h>
int main(){
    int *l,sum=0;
    int x[]={5,9,6,3,7};
    l=x;
    for(int i;i<5;i++){
        sum+=*(x+i);
    }
    printf("%d\n",sum);
    return 0;
}