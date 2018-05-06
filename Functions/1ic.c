#include<stdio.h>
int fact(int num){
    int i , fact=1;
    for(i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",fact(num));
}