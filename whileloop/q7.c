#include<stdio.h>

int main() {
    int capacity, n, change;
    int occupied = 0;
    int critical = 0;

    scanf("%d", &capacity);
    scanf("%d", &n);

    int limit = capacity * 0.9;

    int i = 0;
    while (i < n) {
        scanf("%d", &change);

        occupied += change;

        if (occupied > limit) {
            critical++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d", critical);

    return 0;
}
