#include<stdio.h>
int main(){
    int acc,years;
    scanf("%d %d",&acc,&years);
    switch (acc)
    {
    case 1:
    printf("4 percent");
    break;
    case 2:
    if(years<=3){
        printf("5 percent");
    }
    else if(years>3){
        printf("7 percent");
    }
    default:
    printf("invalid");
        break;
    }
}