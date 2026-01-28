#include<stdio.h>
int main(){
    int plan;
    char pay[100];
    scanf("%d",&plan);
    scanf("%s",pay);
    switch (plan)
    {
    plan=199;
    case 1:
    if(pay=="upi" || pay=="UPI"){
        plan-=20;
        printf("pay %d",plan);
    }
    else{
        printf("pay 199");
    }
    break;
    plan=399;
    case 2:
    if(pay=="upi" || pay=="UPI"){
        plan-=20;
        printf("pay %d",plan);
    }
    else{
        printf("pay 399");
    } 
        break;
    
    default:
    printf("invalid");
        break;
    }

}