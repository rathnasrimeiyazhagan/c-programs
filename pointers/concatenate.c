#include<stdio.h>
char* concattwostrings(char *str1,char *str2){
    while(*str1!='\0' && *str1!='\n'){
        str1++;
    }
    if(*str1=='\n'){
        *str1='\0';
    }

    while(*str2!='\0' && *str2!='\n'){
        *str1=*str2;
        str1++;
        str2++; 
    }
    *str1='\0';
}

int main(){
    char str1[100];
    char str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    concattwostrings(str1,str2);
    printf("%s",str1);
    return 0;
}