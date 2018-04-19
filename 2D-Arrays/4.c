#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, m;
    int ar1[100][100];
    scanf("%d",&m);    // size of matrix M x N
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&ar1[i][j]);
        }
    }  
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==j || i<j){
                ar1[i][j] = ar1[i][j];
            }
            else{
                ar1[i][j] = 0;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d\t",ar1[i][j]);
        }
        printf("\n");
    }
}