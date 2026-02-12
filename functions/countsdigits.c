#include<stdio.h>
int countdigits(int a){
    int count=0;
    while(a>0){
        count++;
        a/=10;
    }
    return count;
}

int main(){
    int a;
    scanf("%d",&a);
    int result=countdigits(a);
    printf("%d",result);
    return 0;
}

