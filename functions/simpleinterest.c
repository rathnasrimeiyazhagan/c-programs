#include<stdio.h>
float simpleinterest(int p,int r,int t){
    int SI;
    SI=p*r*t/100.0;
    return SI;
}
int main(){
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    float result;
    result=simpleinterest(p,r,t);
    printf("%.2f",result);
    return 0;
}