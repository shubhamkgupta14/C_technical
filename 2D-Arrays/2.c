#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, m, flag = 0;
    int ar1[100][100];
    scanf("%d",&m);    // size of matrix M x N
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&ar1[i][j]);
        }
    }  
    for(i=0;i<m;i++){
        flag = 0;
        for(j=0;j<m;j++){
            if(ar1[i][j] != ar1[j][i]){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        printf("Not Symmetric\n");
    }
    else{
        printf("Symmetric\n");        
    }
}