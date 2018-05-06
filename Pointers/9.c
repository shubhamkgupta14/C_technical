#include<stdio.h>
#include<stdlib.h>
void main(){
    int i = 0, j=0, sum0=0, sum1=0,r=4,c=3,*p;
    int data[100][100];
    p=&data;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d\t",(p+i*c+j));
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",*(p+i*c+j));
        }
        printf("\n");
    }
}