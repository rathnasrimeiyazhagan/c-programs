#include<stdio.h>
int main(){
    int class,age;
    float fare;
    scanf("%d %d",&class,&age);
    switch (class)
    {
    case 1:
    fare=300;
        if(age<12){
            fare=300-((50*fare)/100);
            printf("%0.1f",fare);
        }
        else if(age>60)
        {
        fare=300-((33*fare)/100);
        printf("%f",fare);
        }
        else{
            printf("Fare 300");
        }
        break;
    case 2:
    fare=1000;
    if(age<12){
        fare=1000-((50*fare)/100);
        printf("%d",fare);
        }
    else{
        printf("fare 1000");
    }
    
    default:
    printf("invalid");
        break;
    }

}