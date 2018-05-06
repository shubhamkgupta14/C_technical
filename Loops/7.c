#include<stdio.h>
int main(){
    int range, i, j, count;
    scanf("%d",&range);

    for(i=2;i<=range;i++){
        count = 0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count < 2){
            printf("%d ",i);
        }

    }
    return 0;
}