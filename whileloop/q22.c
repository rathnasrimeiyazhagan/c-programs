#include<stdio.h>
int main(){
    int n,att;
    scanf("%d",&n);
    int i=0,fail=0,cons=0,lock=-1;
    while(i<n){
        scanf("%d",&att);
        if (att==0)
        {
            fail++;
            cons++;
            if(cons==3 && lock==-1){
                lock=i+1;
            }
        }
        else{
            cons=0;
        }
        i++; 
    }
    printf("Lock triggered at: %d\n",lock);
    printf("Total failed attempts: %d",fail);
}