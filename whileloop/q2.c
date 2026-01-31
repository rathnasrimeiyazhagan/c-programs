#include<stdio.h>
int main(){
    int days,transaction,bal;
    int lowdays=0;
    scanf("%d %d",&days,&bal);
    int i=0;
    while(i<days){
        scanf("%d",&transaction);
        bal+=transaction;
        if(bal<2000){
            lowdays++;

        }
        i++;
    }
     printf("Final Balance: %d\n", bal);
    printf("Low Balance Days: %d", lowdays);

}