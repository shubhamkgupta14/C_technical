#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double checkRoots(double x, double y, double z){
   double res;
   res = y*y - 4*x*z;
   if(res == 0){
      printf("Roots are EQUAL and REAL.\n");
   }
   else if(res > 0){
      printf("Roots are REAL.\n");
   }
   else if(res < 0){
      printf("Roots are not REAL.\n");
   }
   return res;
}

void calRoots(double x, double y, double z){
   double root1, root2;
   float D;
   D = checkRoots(x,y,z);
   if(D>=0){
      root1 = (-y + sqrt(D))/(2*x);
      root2 = (-y - sqrt(D))/(2*x);
      printf("Root1: %.2f\n",root1);
      printf("Root2: %.2f\n",root2);
   }
   else{
      D = sqrt(abs(D));
      printf("Root1: (%.2f + %.2f i)/%.2f\n",-y, D, 2*x);
      printf("Root2: (%.2f - %.2f i)/%.2f\n",-y, D, 2*x);
   }
}

int main(){
   double x,y,z;
   printf("Enter coefficients of x2, x and constant: ");
   scanf("%lf%lf%lf",&x,&y,&z);
   calRoots(x,y,z);
   return 0;
}