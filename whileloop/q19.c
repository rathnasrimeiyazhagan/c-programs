#include<stdio.h>
int main(){
    int max,n,pat,tot=0,rej=0,treated=0;
    scanf("%d %d",&max,&n);
    int i=0;
    while(i<n){
        scanf("%d",&pat);
        tot+=pat;
        if(tot>max){
            rej=tot-max;
            treated=max;
            
        }
 
        i++;
    }
    printf("Treated patients: %d\n",treated);
    printf("Rejected patients: %d",rej);
}