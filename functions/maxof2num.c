#include<stdio.h>

int maximum(int a,int b){
    int max=0;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    return max;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result;
    result=maximum(a,b);
    printf("%d",result);
    return 0;
}