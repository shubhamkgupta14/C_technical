#include<stdio.h>
int main(){
    int arr[50], *p, n, min, i, *q;
    p = arr;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    q = &min;
    *q = *p;
    for(i=0;i<n;i++){
        if(*q > *(p+i)){
            *q = *(p+i);
        }
    }
    printf("%d",*q);
    return 0;
}