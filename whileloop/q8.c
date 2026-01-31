#include<stdio.h>

int main() {
    int n, status;
    int cs = 0, maxStreak = 0;

    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &status);

        if (status == 0) {      
            cs++;
            if (cs > maxStreak) {
                maxStreak = cs;
            }
        } else {                   
            cs = 0;
        }

        i++;
    }

    printf("Longest Default Streak: %d", maxStreak);

    return 0;
}
