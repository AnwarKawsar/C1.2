#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    printf("Enter A:\n");
    scanf("%lf",&A);
    printf("Enter B:\n");
    scanf("%lf",&B);
    C = sqrt(A*A+B*B);
    printf("Side C:%-6.2lf",C);
    return 0;
}