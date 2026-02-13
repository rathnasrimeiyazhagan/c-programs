#include<stdio.h>
char* copystring(char *str){
    static char cpy[100];
    int i;
    for(i=0;*(str+i)!='\0';i++){
        *(cpy+i)=*(str+i);
    }
    *(cpy+i)='\0';
      return cpy;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *res=copystring(str);
    printf("%s",res);
    return 0;
}