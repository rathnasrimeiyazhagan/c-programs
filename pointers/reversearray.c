#include<stdio.h>
void reversearray(int *arr,int n){
    int *start=arr;
    int *end=arr+n-1;
    int temp=0;
        for(int i=0;i<n/2;i++){
            temp=*start;
            *start=*end;
            *end=temp;
            start++;
            end--;
        }
        for(int *p=arr;p<arr+n;p++){
            printf("%d ",*p);
        }

    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int *p=arr;p<arr+n;p++){
        scanf("%d",p);
    }
    reversearray(arr,n);
    // printf("%d",res);
    return 0;
}
