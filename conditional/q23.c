#include <stdio.h>

int main() {
    int type, bill;
    scanf("%d %d", &type, &bill);

    switch (type) {
        case 1:
         bill = bill - (bill * 5 / 100);
        printf("Pay ₹%d", bill);
        break;
        case 2:
         bill = bill - (bill * 15 / 100);
        printf("Pay ₹%d", bill);
       break;
    }

    return 0;
}
