#include<stdio.h>
int main(){
   int n, a = 0, b = 1, fib = 1, i;
   printf("n: ");
   scanf("%d",&n);
   printf("Series: %d %d ",a,b);
   for(i=2;i<=n;i++){
      fib = a + b;
      a = b;
      b = fib;
      printf("%d ",fib);
   }
   return 0;
}  
