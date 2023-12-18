#include<stdio.h>
int main()
{   int p=0,x;
scanf("%d",&x);

    if(x%100!=0 && x%4==0)
    {p=1;}
    else if(x%400==0)
    {p=1;}
    else
    {p=0;}
    printf("%d",p);
    return 0;

}