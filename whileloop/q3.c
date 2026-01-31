#include<stdio.h>
int main(){
    int tot,n,dduse,sum=0,daysused=0,rem=0;
    scanf("%d %d",&tot,&n);
    int i=0;
    while(i<n){
        scanf("%d",&dduse);
        sum+=dduse;
        if(sum<=tot){
            daysused++;
        }
        rem=tot-sum;
        i++;
    }
    printf("days used: %d\n",daysused);
    printf("Remaining data: %d",rem);
}