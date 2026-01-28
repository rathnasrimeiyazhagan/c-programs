#include<stdio.h>
int main(){
    int a,temp,ld,num=0;
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        ld=a%10;
        num=(num*10)+ld;
        a/=10;
    }
    if(temp==num){
        printf("Yes"); 
    }
    else{
        printf("No");
    }
}
