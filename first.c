#include<stdio.h>
#include<string.h>

 
int main()

{   
    char name[25];
    int age;
    
    printf("What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1]='\0';

    printf("What's your age?\n");
    scanf("%d",&age);
    
    //scanf("%s",&name);
    
    printf("Hello %s!!\n",name);
    printf("You are %d years old.\n",age);
    return 0;
}