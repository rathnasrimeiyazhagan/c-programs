#include <stdio.h>

int main() {
    int loan, cs;
    scanf("%d %d", &loan,&cs);
    switch (loan)
    {
    case 1:
        if(cs>=700){
            printf("approved");
        }
        else if(cs>=650 && cs<=699){
            printf("Manual review");
        }
        break;
    case 2:
        if(cs>=700){
            printf("Approved");
        }
        else if(cs<700){
            printf("Rejected");
        }
    
    default:
    printf("invalid");
        break;
    }
}