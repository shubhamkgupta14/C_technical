#include<stdio.h>

int main(){
    int a, b, ch;
    char c;
    scanf("%d%d",&a,&b);
    printf("Press\n1: Add\n2: Sub\n3: Mul\n4: Div\n5: Mod\n");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("%d\n",a+b);
        break;
        case 2: printf("%d\n",a-b);
        break;
        case 3: printf("%d\n",a*b);
        break;
        case 4: printf("%d\n",a/b);
        break;
        case 5: printf("%d\n",a%b);
        break;
        default: printf("O oo");
    }
    return 0;
}