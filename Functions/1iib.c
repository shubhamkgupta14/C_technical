#include<stdio.h>
void power(int num, int poww){
    int i, res=1;
    for(i=1;i<=poww;i++){
        res = res * num;
    }
    printf("%d\n",res);
}

int main(){
    int num, poww;
    scanf("%d%d",&num,&poww);
    power(num,poww);
}