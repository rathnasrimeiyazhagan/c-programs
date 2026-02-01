#include<stdio.h>
int main(){
    int n,viblevel,unsafe=0,breakdown=-1,consec=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&viblevel);
        if(viblevel>70){
            unsafe++;
            consec++;
            if(consec==3&& breakdown==-1){
                breakdown=i+1;
            }
        }
        else{
            consec=0;
        }
       
        i++;
    }
    if(breakdown==-1){
        printf("Not occurred\n");
    }
    else{
         printf("Breakdown at: %d\n",breakdown);
    }
   
    printf("Unsafe readings: %d",unsafe);
}