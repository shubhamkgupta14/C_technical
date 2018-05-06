#include<stdio.h>
int main(){
    char str[20], *p;
    p = str;
    int i;
    gets(p);
    for(i=0;*(p+i)!=0;i++);
    printf("%d\n",i);
}