#include<stdio.h>
int fibonaccciseries(int a){
    int first=0;
    int sec=1;
    for(int i=0;i<a;i++){
        printf("%d ",first);
        int next=first+sec;
        first=sec;
        sec=next;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    fibonaccciseries(a);
    return 0;
}
