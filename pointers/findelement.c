#include<stdio.h>
int findelement(int *arr,int n,int x){
    int find=-1;
    int index=0;
    for(int *p=arr;p<arr+n;p++){
        if(*p==x){
            find=1;
            index=p-arr;
        }
    }
    if(find==1){
        printf("%d",index);
    }
    else{
        printf("-1");
    }

}

int main(){
    int n;
    int x;
    scanf("%d",&n);
    int arr[n];
    for(int *p=arr;p<arr+n;p++){
        scanf("%d",p);
    }
    scanf("%d",&x);
    findelement(arr,n,x);
    return 0;
}