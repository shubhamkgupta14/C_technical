#include<stdio.h>
int main(){
    int i,j,c=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",c%2);
            c++;
        }
        if(i%2==0){
            c = 1;
        }
        else{
            c = 0;
        }
        printf("\n");
    }
    return 0;
}