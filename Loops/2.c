#include<stdio.h>
int main(){
   int n, fact = 1, i;
   printf("n: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      fact = fact * i;
   }
   printf("%d!: %d\n",n,fact);
   return 0;
}  
