#include <stdio.h>

int main() {
    int units;
    int bill = 0;
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 3;
    }
    else if (units <= 100) {
        bill = (50 * 3) + (units - 50) * 5;
    }
    else {
        bill = (50 * 3) + (50 * 5) + (units - 100) * 7;
    }

    printf("Bill amount = Rs. %d", bill);

    return 0;
}
