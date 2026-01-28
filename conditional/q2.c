#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    switch (mark/10)
    {
    case 10:
    case 9:
    printf("Grade A");
    break;
    case 8:
    printf("Grade B");
    case 7:
    case 6:
    printf("Grade C");
    break;
    case 5:
    printf("Grade D");
    break;
    case 4:
    printf("Grade E");
    break;
    case 3:
    if(mark>=35)
    {
        printf("Supplementry");
    }
    else{
        printf("fail");
    }
    break;

    default:
    printf("fail");
        break;
    }
}