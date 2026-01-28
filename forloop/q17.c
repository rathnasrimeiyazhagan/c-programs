#include<stdio.h>
int main(){
    int a,ld,sum=0;
    
    scanf("%d",&a);
    int temp=a;
    while(a!=0){
        ld=a%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
        fact=fact*i;
    }
        sum+=fact;
        a=a/10;
}
    if(sum==temp){
        printf("yes");
    }
    else{
        printf("no");
    }

}
