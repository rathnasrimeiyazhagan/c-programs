#include<stdio.h>
int pallindrome(int a){
    int temp=a;
    int rev=0;
    int ld=0;
    while (a>0){
        ld=a%10;
        rev=ld+rev*10;
        a/=10;
    }
    if(temp==rev){
        printf("pallindrome");
    }
    else{
        printf("not");
    }
    return 0;  
}
int main(){
    int a;
    scanf("%d",&a);
    int result;
    pallindrome(a);
    return 0;
}