#include<stdio.h>
#include<stdlib.h>
int arr(int *ar, int n){
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}

int main(){
    int n, i;
    scanf("%d",&n);
    int *ar = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    arr(ar,n);
    return 0;
}