#include<stdio.h>
void power(){
    int i, num, poww, res=1;
    scanf("%d%d",&num, &poww);
    for(i=1;i<=poww;i++){
        res = res * num;
    }
    printf("%d\n",res);
}

int main(){
    power();
}