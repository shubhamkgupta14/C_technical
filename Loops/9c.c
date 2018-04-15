#include <stdio.h>
#include <math.h>

int facto(int n){
    int i, fact = 1;
    for(i = 1;i <= n;i++){
        fact = fact * i; 
    } 
    return fact;
}

int main(){
    int i, j, x, num;
    double sum = 0;
    scanf("%d%d",&x,&num);
    for(i=0,j=0;i<num;i++,j=j+2){
        sum += pow(x,j)/facto(j);
    }
    printf("%.7lf\n",sum);
    return 0;
}