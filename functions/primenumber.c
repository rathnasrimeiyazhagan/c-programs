#include<stdio.h>
int primenumber(int a){
    int prime=1;
    if(a<=1){
        prime=0;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            prime=0;
            break;
        }    } 
    if(prime==1){
        printf("Prime");
    }
    else{
        printf("Not");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    primenumber(a);
    return 0;
}