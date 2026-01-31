#include<stdio.h>

int main() {
    int fuel, n, consumed;
    int trips = 0;

    scanf("%d", &fuel);
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        scanf("%d", &consumed);

       
        if (fuel < consumed) {
            break; 
        }

        fuel -= consumed; 
        trips++;           
        i++;
    }

    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d", fuel);

    return 0;
}
