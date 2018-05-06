#include<stdio.h>
int main(){
    int a = 5, *p;
    p = &a;
    printf("%d\n",*p);
    printf("%d\n",p);
}