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
       
        int count=0;
       for(int i=0;i<r;i++){
        int start=0;
       int end=c-1;
       int pal=1;
        while(start<end){
            if(arr[i][start]!=arr[i][end]){
                pal=0;
                break;
            }
            start++;
            end--;
        }
        if(pal==1){
            count++;
        }
       }
        printf("%d",count);
    
      
}