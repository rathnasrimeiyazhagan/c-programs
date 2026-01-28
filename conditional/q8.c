#include <stdio.h>

int main() {
    int marks, attendance;
    scanf("%d %d", &marks,&attendance);

    if (attendance < 75) {
        printf("Fail");
    } else {
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                if (marks >= 75)
                    printf("Distinction");
                else
                    printf("Pass");
                break;

            case 6:
            case 5:
                printf("Pass");
                break;

            default:
                printf("Fail");
        }
    }

    return 0;
}
