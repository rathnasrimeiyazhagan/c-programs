#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    printf("%d",count);
}