#include <stdio.h>
int main() {
    int type, units, bill = 0;
    scanf("%d %d", &type, &units);

    switch(type) {
        case 1:
        if(units <= 30){
            bill = units * 5;
         printf("Bill %d", bill);
        }
        
        else{
        bill = (30 * 5) + (units - 30) * 8;
         printf("Bill %d", bill);
        }
        
        break;
        case 2:
        bill = units * 10;
        printf("Bill %d", bill);
         break;
    }

    
    return 0;
}
