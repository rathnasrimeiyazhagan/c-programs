#include<stdio.h>
int sumofdigits(int a){
    int ld;
    int sum=0;
    while(a>0){
        ld=a%10;
        sum+=ld;
        a/=10;
    }
    return sum;
}
int main(){
    int a;
    scanf("%d",&a);
    int result=sumofdigits(a);
    printf("%d",result);
    return 0;
}