#include<stdio.h>
int main(){
    int n,asc=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0];
    for ( int i=0; i<n; i++)
    {
       if(arr[i+1]<first){
        asc=0;
        break;
       } 
    }
    if(asc==1){
        printf("Yes");
       }
    else{
        printf("No");
    }
    return 0;
}