#include<stdio.h>
int main(){
    int a,ld,rev=0;
    scanf("%d",&a);
    for(;a!=0;a=a/10){
        ld=a%10;
        rev=(rev*10)+ld;
        
    }
    printf("%d",rev);
}