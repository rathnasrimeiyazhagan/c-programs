#include<stdio.h>
int maximum(int *arr,int n){
    int max=*arr;
    for(int i=1;i<n;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    return max;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    int res=maximum(arr,n);
    printf("%d",res);
}