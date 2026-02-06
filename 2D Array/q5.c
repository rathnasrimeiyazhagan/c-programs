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
    int minsum=0;
    for(int j=0;j<c;j++){
        minsum+=arr[0][j];
    }
    int index=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
            if(sum<minsum){
                minsum=sum;
                index=i;
            }
        }
    }
    printf("%d",index);
    return 0;
}