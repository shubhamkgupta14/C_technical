#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, k, m, n;
    int ar1[100][100], ar2[100][100], ar3[100][100];
    scanf("%d%d",&m,&n);    // size of matrix M x N
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar2[i][j]);
        }
    }    
    // sum
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            ar3[i][j] = ar1[i][j] + ar2[i][j];
        }
    }    
    printf("\nSum:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",ar3[i][j]);
        }
        printf("\n");
    }    
    // sub
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            ar3[i][j] = ar1[i][j] - ar2[i][j];
        }
    }    
    printf("\nSub:\n");    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",ar3[i][j]);
        }
        printf("\n");
    }        
    // Multiplication
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            ar3[i][j] = 0;
            for(k=0;k<n;k++){
                ar3[i][j] += ar1[i][k] * ar2[k][j];
            }
        }
    }
    printf("\nMultiplication:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",ar3[i][j]);
        }
        printf("\n");
    }   
}