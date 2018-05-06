#include<stdio.h>
int main(){
    int num, i, fact;
    int *n, *f;
    n = &num;
    f = &fact;
    *f = 1;
    scanf("%d",n);
    for(i=1;i<=*n;i++){
        *f = *f * i;
    }
    printf("%d\n",*f);

    return 0;
}