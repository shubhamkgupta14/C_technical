#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i, n;
    gets(str);
    scanf("%d",&n);
    i = n-1;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    return 0;
}