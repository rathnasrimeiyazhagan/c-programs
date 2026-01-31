#include<stdio.h>

int main() {
    int n, order;
    int success = 0, cancel = 0;

    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &order);

        if (order == 1) {
            success++;
        } else if (order == 0) {
            cancel++;
        }

        i++;
    }

    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);

    if (cancel > success) {
        printf("Status: Risk");
    } else {
        printf("Status: Safe");
    }

    return 0;
}
