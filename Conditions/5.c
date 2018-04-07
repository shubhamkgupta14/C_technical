#include<stdio.h>
int main(){
   float x;
   int y;
   printf("x: ");
   scanf("%f",&x);
   if(x>0){
      y = 1;
   }
   else if(x<0){
      y = -1;
   }
   else{
      y = 0;
   }
   printf("y = %d\n",y);
   return 0;
}
