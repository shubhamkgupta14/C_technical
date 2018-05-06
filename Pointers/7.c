#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[20], *p;
    int i;
    p = str;
    gets(p);
    i = 0;
    while(*(p+i) != 0){
        i++;
    }
    i--;
    while(i>=0){
        printf("%c",*(p+i));
        i--;
    }
}