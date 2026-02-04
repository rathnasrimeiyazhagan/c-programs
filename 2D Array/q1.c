#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int secmax=arr[0][1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                secmax=max;
                max=arr[i][j]; 
            }
            else if(arr[i][j]<max && arr[i][j]>secmax){
                secmax=arr[i][j];
            }
        }  
    }
    printf("%d",secmax);
}