// call by reference

#include<stdio.h>

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
}

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a: %d\nb: %d\n",a,b);
    return 0;
}


// call by value

#include<stdio.h>

int swap(int a, int b){
    int temp;
    temp = a;
    a= b;
    b = temp;
    printf("a: %d\nb: %d\n",a,b);    
}

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}