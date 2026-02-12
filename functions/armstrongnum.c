#include<stdio.h>
int armstrongnum(int a){
    int original = a;
    int sum=0;
    int ld=0;
    int pow=1;

    while(a>0){
        ld=a%10;
        pow=ld*ld*ld;
        sum+=pow;
        a/=10;
    }

    if(sum==original){
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong Number");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    armstrongnum(a);
    return 0;
}
