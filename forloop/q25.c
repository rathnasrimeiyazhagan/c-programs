#include<stdio.h>
int main(){
    int a,ld,num=0,sum=0;
    scanf("%d",&a);
    int temp=a;
    while(a!=0){
        ld=a%10;
        sum+=ld*ld*ld;
        a/=10;
    }
    if(temp==sum){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
