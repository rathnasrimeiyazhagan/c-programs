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
     int dup=-1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           for(int x=0;x<=i;x++){
            for(int y=0;y<c;y++){
                if(x==i && y>=j){
                    break;
                }
                if(arr[i][j]==arr[x][y]){
                   dup=arr[i][j];
                   break;
                } 
            } 
            if(dup!=-1){
                break;
            } 
           }
            if(dup!=-1){
                break;
            }     
    }  
        if(dup!=-1){
                break;
            }   
}
    printf("%d",dup);
}
