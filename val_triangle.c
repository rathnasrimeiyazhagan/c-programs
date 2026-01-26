#include <stdio.h>

int main() {
    int a, b, c,d;
    scanf("%d %d %d", &a, &b, &c);
    d=a+b+c;

    if (d== 180 && a > 0 && b > 0 && c > 0) {
        printf("Valid triangle");
    } else {
        printf("Not a valid triangle");
    }

    return 0;
}
