#include <stdio.h>

int main() {
    int plan;
    float data;
    scanf("%d", &plan);
    scanf("%f",&data);
    switch (plan)
    {
    case 1:
        if(data<=1){
            printf("Normal speed");
        }
       else if(data>1){
            printf("Speed reduced");
        }
        break;
    case 2:
    if(data<=2){
            printf("Normal speed");
        }
       else if(data>2){
            printf("Extra charges applied");
        }
        break;

    
    default:
    printf("invalid");
        break;
    }


}