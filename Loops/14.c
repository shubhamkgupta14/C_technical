#include<stdio.h>
void main(){
   int n,i,j,flag=0;
   scanf("%d",&n);
   for(i=n;i>0;i--){
      for(j=0;j<i;j++){
         printf("%c",65+j);
      }
      for(j=0;j<flag;j++){
         printf(" ");
      }
      for(j=i;j>0;j--){
         if(j==n)
            continue;
         printf("%c",65+j-1);
      }
      if(flag==0)
         flag++;
      else
         flag+=2;
      printf("\n");
   }
}
