#include<stdio.h>
int main(){
    int a;
    
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }   
} 