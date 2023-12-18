#include<stdio.h>
int leap_year(int x);

int main()
{
    int year=0;
    printf("Give the year: ");
    scanf("%d",&year);
    leap_year(year)==1?printf("%d is a leap year\n",year):printf("%d is not a leap year\n",year);
    return 0;
}
int leap_year(int x)
{   int p=0;
    if(x%100!=0 && x%4==0){
        return 1;
        }
    else if(x%400==0)
    {
        return 1;
        }
    else
    {
        return 0;
        }
    

}