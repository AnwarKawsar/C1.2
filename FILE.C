#include<stdio.h>
int main(){
    FILE *F1,*F2,*F3;
    F1=fopen("INPUT.TXT","r");
    F2=fopen("OUTPUT.TXT","a");
    F3=fopen("121.txt","w");

    //printf(F1,"%d+%d=%d\n",x,y);
    if(F1==NULL){
        printf("Invalid input file");
    }
    char content[1024];
    while(fgets(content,1024,F1)){
        fprintf(F2,"%s",content);
        printf("%s\n",content);
    } 
    fprintf(F2,"\n");
    
   // fprintf(F3,"%d+%d=%d",)

    fclose(F1);
    fclose(F2);
    return 0;
}