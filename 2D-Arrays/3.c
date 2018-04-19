#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, m, sum1 = 0, sum2=0;
    int ar1[100][100];
    scanf("%d",&m);    // size of matrix M x N
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&ar1[i][j]);
        }
    }  
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i == j){
                sum1 += ar1[i][j];
            }
            if(i+j == m-1){
                sum2 += ar1[i][j];
            }
        }
    }
    printf("sum of '\\' diagonal: %d\n", sum1);
    printf("sum of '/' diagonal: %d\n", sum2);
}