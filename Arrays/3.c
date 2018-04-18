#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, pos, val;
    scanf("%d",&n);
    scanf("%d%d",&pos,&val);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}