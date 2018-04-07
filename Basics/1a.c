#include<stdio.h>
int main(){
   float a, x, b;
   printf("Enter a, b, x: ");
   scanf("%f%f%f",&a,&b,&x);
   printf("%.2f",(a*x+b)/(a*x-b));         
   return 0;
}
