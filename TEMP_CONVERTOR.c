#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    char temp_scale;
    float temp;

    printf("Enter Temp scale (F) or (C): \n");
    scanf("%c",&temp_scale);

    temp_scale= toupper(temp_scale);

    switch (temp_scale)
    {
    case 'F':
        printf("Enter temp in Farenheit scale:\n");
        scanf("%f",&temp);
        temp=(temp-32)*5/9;
        printf("Temp in C scale is %.2f",temp);
        break;
    case 'C':
        printf("Enter temp in Celsius scale:\n");
        scanf("%f",&temp);
        temp=(temp*9/5)+32;
        printf("Temp in C scale is %.2f",temp);
        break;
    default:
        printf("Enter an valid scale!!");
        break;
    }
    return 0;
}