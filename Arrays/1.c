#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, sum=0, i;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Sum: %d\t",sum);
    printf("Avg: %f\t",(float)sum/n);
    return 0;
}