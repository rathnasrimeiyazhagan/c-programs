#include<stdio.h>
#include<string.h>
char* pallindrome(char *str){
    int len=strlen(str);
    if(str[len-1] == '\n'){
        str[len-1] = '\0';
        len--;
    }
    char*start=str;
    char *end=str+len-1;
    int pal=1;
    while(start<end){
        if(*start!=*end){
            pal=0;
            break;
        }       
        start++;
        end--;
    }
    if(pal==1){
        printf("Pallindrome");
    }
    else{
        printf("Not a pallindrome");
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    pallindrome(str);
    return 0;
}