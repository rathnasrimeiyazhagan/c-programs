#include<stdio.h>
int evenodd(int a){

    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    
}
int main(){
    int a;
    scanf("%d",&a);
    evenodd(a);
}