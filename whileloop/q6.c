#include<stdio.h>

int main() {
    int maxWeight, n, weight;
    int total = 0, allowed = 0;
    int overload = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &weight);

        if (total + weight > maxWeight) {
            overload = 1;
            break;
        }

        total += weight;
        allowed++;

        i++;
    }

    printf("Passengers Allowed: %d\n", allowed);

    if (overload == 1) {
        printf("Overload: Yes");
    } else {
        printf("Overload: No");
    }

    return 0;
}
