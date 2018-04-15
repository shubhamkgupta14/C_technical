#include<stdio.h>
int main(){
    int i,j,c=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            c = 1;
        }
        else{
            c = 2;
        }
        for(j=1;j<=i;j++){
            printf("%d ",c);
            if(c==1){
                c = 2;
            }
            else{
                c = 1;
            }
        }
        printf("\n");
    }
    return 0;
}