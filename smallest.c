#include<stdio.h>
int main(){
    int smallest,a,b;
    scanf("%d %d",&a,&b);
    smallest=(a<b)?a:b;
    printf("%d is the smallest",smallest);
    return 0;
}