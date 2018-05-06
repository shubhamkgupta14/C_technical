#include<stdio.h>
#include<stdlib.h>
int bubble(int *arr, int n){
    int i,j, temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
