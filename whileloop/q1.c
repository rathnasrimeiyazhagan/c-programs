#include<stdio.h>
int main(){
    int a,n,nv=0,lv=0,cs=0;
    scanf("%d",&a);
    int i=0;
    while(i<a){
        scanf("%d",&n);
        if(n>70){
            nv++;
            cs++;
            if(cs>lv){
            lv=cs;
        }
    }
        else{
            cs=0;
            }
        
        i++;
    }
    printf("Noise Violations: %d\n", nv);
    printf("Longest Violation Streak: %d", lv);
}
