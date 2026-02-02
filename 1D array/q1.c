#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int lar=arr[0],sec=arr[1];
    if(arr[0]>arr[1]&& arr[0]!=arr[1]){
        lar=arr[0];
        sec=arr[1];
    }
    else if(arr[1]>arr[0]&& arr[0]!=arr[1]){
        lar=arr[1];
        sec=arr[0];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            sec=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>sec){
            sec=arr[i];
        }
    }
   
    printf("Largest: %d\n",lar);
    printf("Second largest: %d",sec);
}