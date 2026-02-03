#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int dup=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                dup=1;
                break;
            }
        }
        if(dup==0){
            count++;
        }
    }
    printf("%d",count);

}