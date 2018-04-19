#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,flag=0,i,pos,j,p,miss=0,hit=0;
    scanf("%d",&k);
    int *a=(int*)malloc(sizeof(int)*k);
    for(i=0;i<k;i++){
        a[i]=999;
    }
    int input[]={4,3,2,6,1,2,4,3,1,4,2};
    p=11;
    for(i=0;i<p;i++){
        flag=0;
        for(j=0;j<k;j++){           //SearchForElementHere
            if(a[j]==input[i]){ 
                flag=1;
                pos=j;
                break;
            }           
        }
        if(flag==1){ 
            hit++;               //IfElementExists            
            for(j=pos;j>0;j--){
                a[j]=a[j-1];
            }
        }
        else{  
            miss++;                     //IfElementIsNotExists
            for(j=k-1;j>0;j--){
                a[j]=a[j-1];
            }
        }
        a[j]=input[i];              //NewElementInsertedWithMostRecentlyUsed

    }
    for(i=k-1;i>=0;i--){               //PrintingLastCacheMemory
        printf("%d\t",a[i]);
    }
    printf("\nHit: %d",hit);
    printf("\nMiss: %d\n",miss);

}