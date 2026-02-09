#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        int unique=1;
        if(str[i] == '\n') 
        continue;
        for(int j=0;j<strlen(str);j++){
            if(i!=j && str[i]==str[j]){
                unique=0;
                break;
            }
        }
        if(unique==1){
        printf("%c",str[i]);
        return 0;
    }
    }
    
        printf("-1");
    
}
    

