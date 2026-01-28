#include<stdio.h>
int main(){
    int a,ld,count=0;
    scanf("%d",&a);
    while(a!=0){
        ld=a%10;
        count++;
        a/=10;
    }
    printf("%d",count);
}
