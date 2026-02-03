#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int found=0;
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d",arr[i],arr[j]);
                found=1;
                break;
            }
        }
        if(found==1){
            break;
        }
    }
    if(found==0){
        printf("No pair");
    }
}