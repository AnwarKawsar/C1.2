#include<stdio.h>
struct student{
int id;
char name[50];
float cgpa;
};

void main(){
struct student x[3];
for(int i=0;i<3;i++)
{
 printf("Enter student id: ");
 scanf("%d",&x[3].id);
 printf("\nEnter student name: ");
 gets(x[i].name);
 printf("\nEnter student cgpa: ");
 scanf("%f",&x[i].cgpa);
 fflush(stdin);
}
for(int i=0;i<3;i++)
{
    printf("\n student no: %d \n names: %s \n id: %d \n cgpa: %f",i+1,x[i].name,x[i].id,x[i].cgpa);
}
return 0;
}