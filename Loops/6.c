#include<stdio.h>
#include<math.h>
int main(){
    int num, val=0, i=0, last;
    scanf("%d",&num);
    while(num){
        last = num % 10;
        num /= 10;
        val += last * pow(2,i);
        i++; 
    }
    printf("%d\n",val);
    return 0;
}