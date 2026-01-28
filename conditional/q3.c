#include<stdio.h>
int main(){
    int type,bal,wd;
    scanf("%d %d %d",&type,&bal,&wd);
    switch (type)
    {
    case 1:
        if(bal>wd){
            printf("Transaction successful");
        }
        else{
            printf("Insufficient balance");
        }
        break;
    case 2:
    if(wd>5000){
        printf("limit exceeded");
    }
    else if(wd<bal){
        printf("Transaction successful");
    }
    else{
        printf("Insufficient balance");
    }
    
    default:
    printf("invalid");
        break;
    }
}