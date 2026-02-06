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
   int maxproduct=0,index=0;
    for(int j=0;j<c;j++){
        maxproduct*=arr[0][j];
    }
    for(int i=0;i<r;i++){
        int product=1;
        for(int j=0;j<c;j++){
                product*=arr[i][j];
            }
           if(product>maxproduct){
            maxproduct=product;
            index=i;
           }
        }
    printf("%d",index);
}
