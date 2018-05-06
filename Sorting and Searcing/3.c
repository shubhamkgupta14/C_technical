#include<stdio.h>
#include<stdlib.h>

int linear(int *arr, int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, key;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int i = linear(arr,n,key);
    if(i == -1){
        printf("Not Found\n");
    }
    else{
        printf("%d\n",i+1);
    }
}