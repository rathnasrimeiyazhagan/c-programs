#include <stdio.h>

int main() {
    int type,hours,fee;
    scanf("%d %d", &type,&hours);
    switch (type)
    {
    case 1:
        if(hours>=1 && hours<=24){
            fee=hours*10;
            printf("%d",fee);
        }
        break;
    case 2:
        if(hours>=1 && hours<=24){
            fee=hours*20;
            printf("%d",fee);
        }
        break;
    
    default:
    if(type!=1 || type!=2){
        fee=20*hours;
        printf("%d",fee);
    }
        break;
    }
}
