#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=0;
    while (str[len]!='\0'){
        len++;
    }
    for(int i=len-1;i>=0;i--){
        if(str[i]!='\n'){
            printf("%c",str[i]);
        }
    }
    return 0;
    
}