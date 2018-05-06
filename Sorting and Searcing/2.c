#include<stdio.h>
int main(){
    int i, n, temp, min, mini, j;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        mini = i;
        for(j=0;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        
        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}