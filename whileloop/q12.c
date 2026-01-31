#include<stdio.h>

int main() {
    int n, usage;
    int maxUsage = 0, surgeHours = 0;

    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &usage);

        if (usage > maxUsage) {
            maxUsage = usage;
        }
        if (usage > 5) {
            surgeHours++;
        }

        i++;
    }

    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d", surgeHours);

    return 0;
}
