#include<stdio.h>
int perfectnum(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("Perfect number");
    }
    else{
        printf("Not perfect number");
    }
    return sum;
}
int main(){
    int a;
    scanf("%d",&a);
    perfectnum(a);
    return 0;
}
