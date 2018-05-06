#include<stdio.h>
int fib(int num){
    if (num==1){
        return 0; 
    }
    else if(num==2){
        return 1;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}

int main(){
    int num, r;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        r = fib(i);
        printf ("%d ",r);
    }
    return 0;
}