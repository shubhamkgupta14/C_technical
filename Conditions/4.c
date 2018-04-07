#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c,res;
   printf("coeff. of x2, x, and cons: ");
   scanf("%d%d%d",&a,&b,&c);
   res = b * b - (4 * a * c);
   if(res > 0){
      printf("Roots are real\n");
   }
   else if(res < 0){
      printf("Roots are imaginary\n");
   }
   else{
      printf("Roots are real and equal\n");
   }
   return 0;
}
