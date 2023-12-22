#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int age;
    
};
typedef struct student std;

void main(){
    std  s[3];
    for(int i=0;i<3;i++){
        printf("Enter the name of Student %d\n",i+1);
        gets(s[i].name);
        printf("\nEnter Roll No.\n");
        scanf("%d",&s[i].roll);
        printf("\nEnter Age \n");
        scanf("%d",&s[i].age);
        fflush(stdin);
}for(int i=0;i<3;i++){
        printf("\nstudent no %d\nname %s\n roll: %d\n age:%d ",i+1,s[i].name,s[i].roll,s[i].age);
}
return 0;
}
