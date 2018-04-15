#include <stdio.h>

int facto(int n){
    int i, fact = 1;
    for(i = 1;i <= n;i++){
        fact = fact * i; 
    } 
    return fact;
}

int main(){
    int i, num;
    float sum = 0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum = sum + (1.0 / facto(i));
    }
    printf("%f\n",sum);
    return 0;
}