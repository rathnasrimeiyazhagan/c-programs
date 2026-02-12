#include<stdio.h>
int sumofnaturalnos(int a){
    int sum=0;
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int a;
    scanf("%d",&a);
    int result=sumofnaturalnos(a);
    printf("%d",result);
    return 0;
}