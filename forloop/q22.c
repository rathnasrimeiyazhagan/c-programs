#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        if(a%i!=0){
            count++;
        }
    }
    printf("%d",count);
}