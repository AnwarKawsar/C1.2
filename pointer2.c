#include<stdio.h>
int str_len(char x[]  ){
    int n=0;
    for(int i=0;x[i];i++)
    n++;
    return n;
}
int main(){
    char name[100];
    printf("Enter a string:");
    gets(name); 
    printf("String length:%d",str_len(name));
    return 0;

}