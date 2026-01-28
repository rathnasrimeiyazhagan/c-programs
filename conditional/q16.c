#include <stdio.h>

int main() {
    int class,weight,fee;
    scanf("%d %d", &class,&weight);
    switch (class)
    {
    case 1:
        fee=weight*300;
        printf("%d",fee);
        break;
    case 2:
    if(weight<=3){
        printf("free");
    }
    else{
        fee=weight*300;
        printf("%d",fee);

    }
    break;
    
    default:
    printf("invalid");
        break;
    }

}