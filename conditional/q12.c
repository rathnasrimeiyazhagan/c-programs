#include<stdio.h>
int main(){
    int type,trip,fee=0;
    scanf("%d %d",&type,&trip);
    switch (type)
    {
    case 1:
        if(trip==1){
            printf("100");
        }
        else if(trip>=2 && trip<=10){
            printf("800 (Monthly Pass)");
        }
        else if(trip>10){
            printf("800 (Monthly Pass)");
        }
        break;
    case 2:
        fee=trip*240;
        printf("%d",fee);
    
    default:
    printf("invalid");
        break;
    }
}