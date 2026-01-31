#include<stdio.h>

int main() {
    int n, delay;
    int totalDelay = 0, delayedDays = 0;

    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &delay);

        totalDelay += delay;      
        if (delay > 2) {    
            delayedDays++;
        }

        i++;
    }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d", delayedDays);

    return 0;
}
