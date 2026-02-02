#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int first=0;
   int end=n-1;
   int temp=0;
   for(int i=0;i<n/2;i++){
    temp=arr[first];
    arr[first]=arr[end];
    arr[end]=temp;
    first++;
    end--;
   }
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   return 0;
}