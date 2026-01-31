#include<stdio.h>

int main() {
    int dataPack, n, usage;
    int day = 0, overuse = 0;

    scanf("%d", &dataPack);
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &usage);
        day++;                
        dataPack -= usage;  

        if (dataPack <= 0) {   
            overuse = -dataPack; 
            break;           
        }

        i++;
    }

    printf("Exhausted Day: %d\n", day);
    printf("Overused Data: %d", overuse);

    return 0;
}
