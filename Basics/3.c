#include<stdio.h>
int main(){
   float net, basic, da, hra, cca, it, pf, trn;
   printf("Basic salary: ");
   scanf("%f",&basic);
   
   da = basic * 0.30;
   hra = basic * 0.15;
   cca = 500;
   it = basic * 0.20;
   pf = basic * 0.05;
   trn = 300;
   net = (basic + da + hra + cca) - it - pf - trn;        
   printf("%.2f",net);   
   return 0;
}
