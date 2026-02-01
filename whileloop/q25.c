#include<stdio.h>
int main(){
    int n,amt;
    int fraud=-1,high=0,consec=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&amt);
        if(amt>=50000){
            high++;
            consec++;
            if(consec==3&&fraud==-1){
                fraud=i+1;
            }
        }
        else{
            consec=0;
        }
        i++;
    }
    if(fraud==-1){
        printf("Fraud Triggered At Attempt: not triggered\n");
    }
    else{
        printf("Fraud Triggered At Attempt: %d\n",fraud);
    }
    
    printf("High-Value Transactions: %d",high);
}