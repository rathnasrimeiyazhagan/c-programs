#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vehicles;
    int total = 0;
    int currStreak = 0;
    int maxStreak = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &vehicles);

        if (vehicles > 20) {
            total++;
            currStreak++;

            if (currStreak > maxStreak) {
                maxStreak = currStreak;
            }
        } else {
            currStreak = 0;
        }

        i++;
    }

    printf("Congestion Minutes: %d\n", total);
    printf("Longest Congestion Streak: %d", maxStreak);

    return 0;
}
