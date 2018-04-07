#include<stdio.h>
int main(){
   float cels, fahr;
   printf("temp in fahrenheit: ");
   scanf("%f",&fahr);
   cels = (fahr - 32) * 5 / 9;
   printf("%.2f *C",cels);        
   return 0;
}
