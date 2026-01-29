#include<stdio.h>
int main(){
    int a,ld,pow=1,dec=0;
    scanf("%d",&a);
    while(a!=0){
        ld=a%10;
        dec+=ld*pow;
        pow=pow*2;
        a/=10; 
        
    }
    printf("%d",dec);
    return 0;
}