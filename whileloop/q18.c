#include<stdio.h>
int main(){
    int cap,n,load,safe=0,fail=0;
    scanf("%d %d",&cap,&n);
    int i=0;
    while(i<n){
        scanf("%d",&load);
        if(load<=cap){
            safe++;
        }
        if(load>cap){
            fail++;
        }
        i++;
    }
    printf("Safe hours: %d\n",safe);
    printf("Failure count: %d",fail);
}