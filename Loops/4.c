#include<stdio.h>
int main(){
   int n, r, i, temp, sum = 0;
   printf("n: ");
   scanf("%d",&n);
   temp = n;
   while(n>0){
      r = n % 10;
      n = n / 10;
      sum = sum * 10 + r; 
   }
   if(sum == temp){
      printf("%d is palindrome\n",temp);
   }
   else{
      printf("%d is not palimdrome\n",temp);
   }
   return 0;
}  
