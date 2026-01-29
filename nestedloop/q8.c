#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int k=a-i;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}