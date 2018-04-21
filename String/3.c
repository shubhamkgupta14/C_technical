#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int cons=0, vow=0, spec=0, word=0, i=0;
    gets(str);
    int len = strlen(str);
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vow++;
        }
        if(str[i] == 32){
            word++;
        }
        if(str[i] >= 65 && str[i] <=90 || str[i] >= 97 && str[i] <= 122){
            cons++;
        }
        i++;
    }
    printf("Vowels: %d\n",vow);
    printf("Consonants: %d\n",cons-vow);
    printf("Words: %d\n",word+1);
    printf("Special: %d\n",len-cons);
    return 0;
}