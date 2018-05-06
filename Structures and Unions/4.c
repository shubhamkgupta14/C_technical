#include<stdio.h>
struct emp{
    int sales;
}e[100];

int main(){
    int total = 0, i, n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&e[i].sales);
    }
    for(i=0;i<n;i++){
        total += e[i].sales;
    }
    printf("%d\n%.2f\n",total, (float)(total/n));
}