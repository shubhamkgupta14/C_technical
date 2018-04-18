#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k=0,m,n,x;
    scanf("%d%d",&m,&n);
    int *ar1 = (int*)malloc(sizeof(int)*m);
    int *ar2 = (int*)malloc(sizeof(int)*n);
    int *ar3 = (int*)malloc(sizeof(int)*(m+n));
    for(i=0;i<m;i++){
        scanf("%d",&ar1[i]);
    }
    for(j=0;j<n;j++){
        scanf("%d",&ar2[j]);
    }

    i=0, j=0;
    
    for(x=0;x<m+n;x++){
        if(i<m && j<n){
            if(ar1[i]<ar2[j]){
                ar3[k++]=ar1[i++];                
            }
            else{
                ar3[k++]=ar2[j++];
            }
        }
        else if(i<m){
            ar3[k++]=ar1[i++];
        }
        else{
            ar3[k++]=ar2[j++];
        }
    }
    for(x=0;x<m+n;x++){
        printf("%d",ar3[x]);
    }
    

    return 0;
}