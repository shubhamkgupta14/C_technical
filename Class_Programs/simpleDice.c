#include<stdio.h>
int main(){
   unsigned short N, user = 1, dice, x1 = 1, x2 = 1, y1= 1, y2 = 1, flag = 0;
   printf("Enter no of Square N: ");
   scanf("%hu",&N);
   int n = N*N;
   while(flag == 0){
      printf("Dice value: ");
      scanf("%hu",&dice);
      if(dice % 2){        // odd
         if(user == 1){
            y1 += dice % N;
            x1 += dice / N;
            printf("%d %d\n",x1,y1);
            if(x1 > N || y1 > N){
               printf("USER %hu won the game.\n",user);
               flag = 1;
            }
            user = 2;
         }
         else{
            y2 += dice % N;
            x2 += dice / N;
            printf("%d %d\n",x2,y2);
            if(x2 > N || y2 > N){
               printf("USER %hu won the game.\n ",user);
               flag = 1;
            }
            user = 1;
         }
      }
      else{       // even
         if(user == 1){
            y1 += dice / N;
            x1 += dice % N;
            printf("%d %d\n",x1,y1);
            if(x1 > N || y1 > N){
               printf("USER %hu won the game.\n",user);
               flag = 1;
            }
            user = 2;
         }
         else{
            y2 += dice / N;
            x2 += dice % N;
            printf("%d %d\n",x2,y2);
            if(x2 > N || y2 > N){
               printf("USER %hu won the game.\n ",user);
               flag = 1;
            }
            user = 1;
         }
      }
   }
   return 0;
}