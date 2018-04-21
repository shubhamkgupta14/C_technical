#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int flag = 0, len, i;
    gets(str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Not Palindrome\n");
    }
    else{
        printf("Palindrome\n");
    }
    return 0;
}
