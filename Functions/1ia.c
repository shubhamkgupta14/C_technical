#include<stdio.h>
void fact(){
    int i, num, fact=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact *= i;
    }
    printf("%d\n",fact);
}

int main(){
    fact();
}