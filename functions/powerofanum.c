#include<stdio.h>
int powerofnum(int a,int b){
    int pow=1;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    return pow;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=powerofnum(a,b);
    printf("%d",result);
    return 0;
}