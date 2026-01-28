#include <stdio.h>
int main() {
    int stype, stime, price = 0;
    scanf("%d %d", &stype, &stime);

    switch(stype) {
        case 1:
        price = 150; 
        break;
        case 2: 
        price = 250; 
        break;
    }

    if(stime >= 18)
        price += 50;
    printf("Ticket Price ₹%d", price);
    return 0;
}
