#include<stdio.h>
void fact(int num){
    int i , fact=1;
    for(i=1;i<=num;i++){
        fact *= i;
    }
    printf("%d\n",fact);
}

int main(){
    int num;
    scanf("%d",&num);
    fact(num);
}