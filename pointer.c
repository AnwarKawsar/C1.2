#include<stdio.h>
int factor();
int main(){
    int x=10,y=15;
    factor(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
int factor(int *p,int *q){
    *p=*p+10;
    *q=*q+10;
    printf("%d %d\n",*p,*q);
    return 0;
    

}