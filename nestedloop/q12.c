#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=1;j<=i+1;j++){
            printf("%d",j);
        }
        for(int k=2;k<2*(a-i);k++){
            printf(" ");
        }
        for(int j=i+1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}