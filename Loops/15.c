#include<stdio.h>
int main(){
	int i, j, k, x=1, n;
	scanf("%d",&n);
	k = n*n + 1;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf("\t");
		}
		for(j=n-1;j>=i;j--){
			printf("%d\t",x++);
		}
		for(j=0;j<n-i;j++){
			printf("%d\t",k++);
		}
		k = (k-1) - (n-(i+1)) * 2;
		printf("\n");
	}
}
