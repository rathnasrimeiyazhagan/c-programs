#include<stdio.h>
int main(){
    int a,fst=0,sec=1,next;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d ",fst);
        next=fst+sec;
        fst=sec;
        sec=next;
     }
     return 0;
}
