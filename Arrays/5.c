#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i,j=0,k=1,flag=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    int *cpy = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cpy[j] = arr[0];
    for(i=1;i<n;i++){
        flag=0;
        for(j=0;j<k;j++){
            if(arr[i]==cpy[j]){
                flag=1;
            }
        }
        if(flag==0){
            cpy[j]=arr[i];
            k++;
        }
    }
    for(j=0;j<k;j++){
        printf("%d ",cpy[j]);
    }
    return 0;
}