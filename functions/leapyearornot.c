#include<stdio.h>
int leapyear(int a){
    if(a%4==0 && (a%100!=0 || a%400==0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    leapyear(a);
    return 0;
}