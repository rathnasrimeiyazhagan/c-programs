#include<stdio.h>
int reverse(int a){
    int rev=0;
    int ld=0;
    while(a>0){
        ld=a%10;
        rev=ld+rev*10;
        a/=10;
    }
    return rev;
}

int main(){
    int a;
    scanf("%d",&a);
    int result;
    result=reverse(a);
    printf("%d",result);
    return 0;
}