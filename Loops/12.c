#include<stdio.h>
#include<math.h>

int main(){
    int range, count, i, rem, temp1, temp2, sum;
    scanf("%d",&range);
    for(i=1;i<=range;i++){
        sum = 0;
        count = 0;
        temp1 = i;
        temp2 = i;
        while(temp1!=0){
            temp1 = temp1 / 10;
            count++;
        }
        while(temp2 != 0){
            rem = temp2 % 10;
            temp2 /= 10;
            sum = sum  + pow(rem,count);
        }
        if(sum == i){
            printf("%d ",i);
        }
    }
    return 0;
}