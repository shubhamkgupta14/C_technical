#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int toUpper(char *str){
    int i=0;
    while(str[i] != 0){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
        i++;
    }
    puts(str);
}

int main(){
    char str[20];
    gets(str);
    toUpper(str);
}