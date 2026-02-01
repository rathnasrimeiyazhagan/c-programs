#include<stdio.h>
int main(){
    int bal,n,pur;
    int tot=0,sucpur=0,final=0;
    scanf("%d %d",&bal,&n);
    int i=0;
    while(i<n){
        scanf("%d",&pur);
        tot+=pur;
        if(tot<=bal){
            sucpur++;
            final=bal-tot;
        }
        i++;   
    }
    printf("Successful purchases : %d\n",sucpur);
    printf("Final balance: %d",final);
}