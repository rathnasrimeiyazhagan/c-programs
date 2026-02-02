#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1],actsum=0,expecsum=0,missing=0;
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        actsum+=arr[i];
    }
    expecsum=n*(n+1)/2;
    missing=expecsum-actsum;
    printf("%d",missing);

}