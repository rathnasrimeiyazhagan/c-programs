// Q30. Power Cut Alert System
#include <stdio.h>

int main() {
    int hours, level;
    scanf("%d", &hours);

    if (hours <= 1){
        level = 1;
    }
        
    else if (hours <= 4)
        {
            level = 2;
        }
    else{
        level = 3;
}
    switch (level) {
    case 1:
    printf("Short Interruption");
    break;
    case 2:
     printf("Medium Interruption");
    break;
    case 3:
    printf("Long Interruption");
    break;
    }

    return 0;
}
