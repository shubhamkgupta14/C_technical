#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   int x, y;
   float res;
   printf("x, y: ");
   scanf("%d%d",&x,&y);
   res = 2.5 * log(x) + cos(32) + abs(x * x - y * y) + sqrt(2 * x * y);
   printf("%.2f",res);        
   return 0;
}
