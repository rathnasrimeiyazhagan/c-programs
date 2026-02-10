#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char cpy[100];
    int i;
    for( i=0;str[i]!='\0';i++){
        cpy[i]=str[i];
    }
    cpy[i]='\0';
    printf("%s",cpy);
    return 0;
}