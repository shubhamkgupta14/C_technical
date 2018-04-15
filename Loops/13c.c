#include<stdio.h>
int main(){
    int i, s=0;
    for(i=0;i<20;i++){
        if(i%2==0){
            s += i;
        }
    }
    printf("%d\n",s);
}