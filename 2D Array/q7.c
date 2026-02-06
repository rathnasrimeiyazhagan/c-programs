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
            for(int j=0;j<c;j++){
                 int rowmin=1;
                 int colmax=1;
        for(int k=0;k<c;k++){
            if(arr[i][k]>arr[i][j]){
                rowmin=0;
            }
        }
        for(int k=0;k<r;k++){
            if(arr[k][j]<arr[i][j]){
                colmax=0;
            }
        }
        if(rowmin==1 && colmax==1){
            count++;
        }
            }
        
        }
        printf("%d",count);
    }
