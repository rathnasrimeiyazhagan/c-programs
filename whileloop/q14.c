#include<stdio.h>

int main() {
    int ATMcash, n, withdrawal;
    int successful = 0;

    scanf("%d", &ATMcash);
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &withdrawal);
        if (withdrawal > ATMcash) {
            break;  
        }

        ATMcash -= withdrawal;  
        successful++;        

    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d", ATMcash);
    }
