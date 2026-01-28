#include <stdio.h>

int main() {
    int type;
    char ch;
    scanf("%d", &type);
    scanf(" %c",&ch); 
    switch (type)
    {
    case 1:
        if(ch=='a'||ch=='A'){
            printf("2500");
        }
        else if(ch=='b'||ch=='B'){
            printf("2000");
        }
        break;
        case 2:
        if(ch=='c'||ch=='C'){
            printf("4000");
        }
        else if(ch=='d'||ch=='D'){
            printf("3000");
        }
        break;
    
    default:
    printf("invalid");

        break;
    }

}