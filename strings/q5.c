#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]=='\0';
        len--;
    }
     int pal=1;
     for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            pal=0;
            break;
        }
     }
     if(pal){
        printf("pallindrome");
     }
     else{
        printf("Not pallindrome");
     }
     return 0;
}
    