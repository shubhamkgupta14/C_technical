#include<stdio.h>
int main(){
    int i, c=0;
    for(i=0;i<20;i++){
        if(i%2==0){
            c++;
        }
    }
    printf("%d\n",c);
}