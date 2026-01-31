#include<stdio.h>
int main(){
    int n,streak,lfstreak=0,cs=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&streak);
        if(streak==0){
            cs++;
            if(cs>lfstreak){
                lfstreak=cs;
            }}
        else{
                cs=0;
            }
        i++;
    }
    printf("Longest failure streak: %d",lfstreak);
}