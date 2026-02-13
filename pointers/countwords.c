#include<stdio.h>
int countwords(char *str){
    int count=1;
    for(char *p=str;*p!='\0';p++){
        if(*p==' '){
            count++;
        }
    }
    return count;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int res=countwords(str);
    printf("%d",res);
    return 0;
}