#include <stdio.h>

int main() {
    int mode;
    char ch;
    scanf("%d", &mode);
    scanf(" %c",&ch);
    switch (mode)
    {
    case 1:
        if(ch=='r' || ch=='R'){
            printf("5000");
        }
        else if(ch=='s' || ch=='S'){
            printf("3000");
        }
        break;
    case 2:
        if(ch=='r' || ch=='R'){
            printf("9000");
        }
        else if(ch=='s' || ch=='S'){
            printf("7000");
        }
        break;
    
    default:
    printf("invalid");
        break;
    }
}
