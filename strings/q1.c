#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == '\n') break;
        len++;
}
 printf("%d",len);
}