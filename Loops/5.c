#include<stdio.h>
int main(){
    int num, rem, sum = 0, i;
    scanf("%d",&num);
    while(num!=0){
        rem = num % 10;
        num /= 10;
        sum += rem;
    }
    printf("%d",sum);
    return 0;
}