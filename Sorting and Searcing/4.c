#include<stdio.h>
void binary(int *a, int start, int end, int val){
    int mid=(end+start)/2;
    
    if(a[mid]==val){
        printf("found");
        exit(0);
    }
    if(start==mid){
        printf("not found");
        exit(0);
    }
    else{
        if(val>a[mid]){
        binary(a,mid+1,end,val);
        }
        else{
           binary(a,start,mid-1,val);
        }
    }
    
}
void main(){
    int a[]={2,4,6,8,10,12,14,16,17,20},n=10,mid,i,j,val=5;
    mid = n/2;
    if(val==a[mid]){
        printf("found");
        exit(0);
    }
    if(val>a[mid]){
        binary(a,mid+1,n,val);
    }
    else{
        binary(a,0,mid-1,val);
    }
}