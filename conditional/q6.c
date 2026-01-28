#include<stdio.h>
int main(){
    int amt,type;
    scanf("%d %d",&amt,&type);
    switch (type)
    {
    case 1:
        printf("$50");
        break;
    case 2:
    if(amt<1000){
        printf("$100");
    } 
    else if(amt>=1000){
        printf("free");
    }
        break;
    
    
    default:
    printf("invalid");
        break;
    }
}