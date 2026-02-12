#include<stdio.h>
float areaofcircle(int r){
    float area;
    area=3.14*(r*r);
    return area;
}
int main(){
    int r;
    scanf("%d",&r);
    float result;
    result=areaofcircle(r);
    printf("%.2f",result);
    return 0;

}