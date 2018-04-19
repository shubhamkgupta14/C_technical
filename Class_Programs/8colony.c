#include<stdio.h>
#include<stdlib.h>
int main(){
    int house, day, i, j;
    scanf("%d%d",&house,&day);   // entry of house and days
    int *cells =(int*)malloc(sizeof(int)*(house+2));
    int *res =(int*)malloc(sizeof(int)*(house+2));
    for(i=1;i<house+1;i++){
        scanf("%d",&cells[i]);
    }
    for(i=1;i<=day;i++){
        for(j=1;j<=house;j++){
            res[j] = cells[j-1] ^ cells[j+1];
        }
        for(j=1;j<=house;j++){
            cells[j] = res[j];
        }
    }
    for(i=1;i<=house;i++){
        printf("%d  ",res[i]);
    }
    return 0;
}