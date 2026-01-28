#include<stdio.h>
int main(){
    int code,exp,salary;
    scanf("%d %d",&code,&exp);
    switch (code)
    {
    case 1:
        if(exp>=3){
            salary=50000+(exp*5000);
            printf("%d",salary);
        }
        else{
            printf("50000");
        }
        break;
    case 2:
    if(exp>=3){
            salary=(exp*5000)+35000;
            printf("%d",salary);
        }
        else{
            printf("35000");
        }
        break;
    
    default:
    printf("invalid");
        break;
    }
}