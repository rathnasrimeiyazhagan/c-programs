#include <stdio.h>

int main() {
    int vtype, dis, fare;
    scanf("%d", &vtype);
    scanf("%d", &dis);

    switch (vtype) {
    case 1:
        fare = dis*10;
        break;
    case 2:
        fare = dis*15;
        break;
    case 3:
        fare = dis*20;
        break;
    }

    printf("Fare ₹%d", fare);
    return 0;
}
