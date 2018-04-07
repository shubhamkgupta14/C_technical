#include<stdio.h>
#include<stdlib.h>
int main(int q, char *p[]){
   int a,b,c;
   a = atoi(p[1]);
   b = atoi(p[2]);
   c = atoi(p[3]);
//   printf("a,b,c: ");
//   scanf("%d%d%d",&a,&b,&c);
   if(a>b){
      if(a>c){
         if(b>c){
            printf("%d %d %d\n",c,b,a);
         }
         else{
            printf("%d %d %d\n",b,c,a);
         }
      }
      else{
         if(b<c){
            printf("%d %d %d\n",b,a,c);
         }
      }
   }
   else{
      if(a<c){
         if(b<c){
            printf("%d %d %d\n",a,b,c);
         }
         else{
            printf("%d %d %d\n",a,c,b);
         }
      }
      else{
         if(b>c){
            printf("%d %d %d\n",c,a,b);
         }
      }
   }
   return 0;
}
