#include<stdio.h>
int main(){
    int i, n;
    scanf("%d",&n);
    float s = 0;
    for(i=1;i<=n;i++){
        s += 1.0/(i*i);
    } 
    printf("%.2f",s);
    return 0;
}