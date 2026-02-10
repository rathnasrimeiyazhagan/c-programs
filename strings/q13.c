#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&ch);
    int index=-1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch && str[i]!='\n'){
            index=i;
            break;
        }
    }
    printf("%d",index);
}