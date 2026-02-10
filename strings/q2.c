#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    int upper=0;
    while(str[i]!=0){
        if(str[i]<='A' && str[i]>='Z'){
            upper=1;
        }
        i++;
    }
    if(upper==1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}