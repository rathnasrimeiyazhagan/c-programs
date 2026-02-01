#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int prev, curr;
    int drops = 0;
    int consec = 0;
    int crashDay = -1;

    scanf("%d", &prev);  
    int day = 2;

    while (day <= n) {
        scanf("%d", &curr);

        if (curr < prev) {
            drops++;
            consec++;

            if (consec == 3 && crashDay == -1) {
                crashDay = day;
            }
        } else {
            consec = 0;
        }
        prev = curr;
        day++;
    }

    printf("Crash Day: %d\n", crashDay);
    printf("Total Drops: %d", drops);

    return 0;
}
