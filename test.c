#include<stdio.h>
int factorial (int x);
int main()
{
    int n=5,r=4,ncr,npr;
    //printf("Give the value of n and r: ");
    //scanf("%d %d",&n,&r);
    ncr= factorial(n)/(factorial(n-r)*factorial(r));
    npr= factorial(n)/factorial(n-r);
    printf("%dc%d = %d \n",n,r,ncr);
    printf("%dp%d = %d",n,r,npr);
    return 0;
}
int factorial (int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
    {
    f=f*i;
    }
    return f;
}