#include <stdio.h>

int main() {
    int type, min, charge = 0;
    scanf("%d %d", &type, &min);

    switch (type) {
        case 1:
        charge = min*1;
        printf("Call Charge ₹%d", charge);
        break;
        case 2:
        charge = min*3;
        printf("Call Charge ₹%d", charge);
        break;
        case 3:
        charge = min*10;
        printf("Call Charge ₹%d", charge);
        break;
    }

    return 0;
}
