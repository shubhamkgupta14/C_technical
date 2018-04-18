#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, pos;
    scanf("%d",&n);
    scanf("%d",&pos);
    int *arr = (int*)malloc(sizeof(int)*n);
    pos = pos - 1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}