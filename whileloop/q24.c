#include<stdio.h>
int main(){
    int fuel,n,burn,sum=0,waste=0,stage=-1;
    scanf("%d %d",&fuel,&n);
    int i=0;
    while(i<n){
        scanf("%d",&burn);
        sum+=burn;
       
        if(sum>fuel && stage==-1){
            stage=i+1;
             waste=sum-fuel;
        }
        i++;
    }
    printf("Emergency Stage: %d\n",stage);
    printf("Fuel Wasted: %d",waste);
}