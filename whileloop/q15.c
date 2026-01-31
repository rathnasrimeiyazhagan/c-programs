#include<stdio.h>

int main() {
    int n, hours;
    int totalOvertime = 0, burnoutDays = 0;
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &hours);

        totalOvertime += hours;     

        if (hours > 4) {      
            burnoutDays++;
        }
        i++;
    }
    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d", burnoutDays);

    return 0;
}
