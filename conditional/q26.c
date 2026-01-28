#include <stdio.h>
int main() {
    int days, fine = 0;
    scanf("%d", &days);

    int slab;
    if(days <= 5){
         slab = 1;
    }
    else if(days <= 10) {
    slab = 2;
    }
    else {
        slab = 3;
    }

    switch(slab) {
        case 1:
        fine = days * 50;
        break;
        case 2:
        fine = days * 100;
         break;
        case 3:
        fine = days * 200; 
        break;
    }

    printf("Fine ₹%d", fine);
    return 0;
}
