#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int maxcount=0;
    int count=0;
    
    for(int i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        if(maxcount<count){
            maxcount=count;
        }
    }
        else{
            count=0;
        }
    }
    printf("%d",maxcount);
}