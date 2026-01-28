#include<stdio.h>
int main(){
    int a,ld,sum=0;
    scanf("%d",&a);
    while(a!=0){
        ld=a%10;
        sum+=ld;
        a/=10;
    }
    printf("%d",sum);
    return 0;
}
