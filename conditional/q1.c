#include<stdio.h>
int main(){
    int unit,a,bill;
    scanf("%d %d",&a,&unit);
    switch (a)
    {
    case 1:
        if(unit<=100){
            bill*=3;
            printf("%d",bill);
        }
        else if(unit>100){
            bill=((100*3)+((unit-100)*5))-80;
            printf("%d",bill);
        }
        else if(unit>=200){
            bill=(100*3)+(100*5)+((unit-200)*7);
            printf("%d",bill);
        }
        break;
    case 2:
        if(unit<=100){
            bill*=7;
            printf("%d",bill);
        }
        else{
            bill=(100*7)+((unit-100)*10);
            printf("%d",bill);
        }
        break;
    
    default:
    printf("invalid");
        break;
    }

}