#include<stdio.h>
int main(){
    int a;
    
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char ch='A'+(a-i);
        char end='A'+(a-1);
        for(;ch<=end;ch++){
            printf("%c ",ch);
           
        }
        printf("\n");
    }   
}    