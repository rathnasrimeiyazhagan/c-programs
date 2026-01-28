#include<stdio.h>
int main(){
    int n,p,pow=1;
    scanf("%d %d",&n,&p);
    for(int i=0;i<p;i++){
        pow=pow*n;
    }
    printf("%d",pow);
    return 0;
}
