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
    int num=0,maxunique=0;
    for(int i=0;i<r;i++){
        int freq=0;
        for(int j=0;j<c;j++){
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(arr[x][y]==arr[i][j]){
                    freq++;
                }
                }
                if(freq>maxunique){
                    maxunique=freq;
                    num=arr[i][j];
                }
            }
                
            }
            
        }
         printf("%d",num);
    }
   

