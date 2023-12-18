#include<stdio.h>
#include<string.h>
int main(){
    printf("What is your name and how old are you:");
    char arr[60];
    arr=getchar();
    int number =strlen(arr);
    int Vcount=0;
    for(int i=0;arr[i];i++){
        if(arr[i]<=65&&arr[i]>=90||arr[i]<=97&&arr[i]>=122){
                Vcount++;
        }
    }
    printf("Number of vowels:%d",Vcount);
    return 0;
}