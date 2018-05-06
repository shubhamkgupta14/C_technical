#include<stdio.h>
int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return fact(num-1)*num;
    }
}

int main(){
    int num, r;
    scanf("%d",&num);
    r = fact(num);
    printf("%d\n",r);
    return 0;
}