#include <stdio.h>
int main() {
    int choice;
    int a, b;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%d %d", &a, &b);
            printf("Sum = %d", a + b);
            break;

        case 2:
            scanf("%d %d", &a, &b);
            printf("Difference = %d", a - b);
            break;

        case 3:
            scanf("%d %d", &a, &b);
            printf("Product = %d", a * b);
            break;

        case 4:
            scanf("%d %d", &a, &b);
            if (b != 0)
                printf("Quotient = %d", a / b);
            else
                printf("Division not possible");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
