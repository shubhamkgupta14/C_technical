#include<stdio.h>
int strlen(char a[]){
    int i;
    for(i=0;a[i]!=0;i++);
    return i;
}
int strcmp(char *a, char *b){
    int i;
    for(i=0;a[i]!=0;i++){
        if(*(a+i)==*(b+i))
            continue;
        else
            break;
    }
    if(*(a+i)==*(b+i))
        return 0;
    return (*(a+i)-*(b+i));
}
void main(){
    int a;
    char aa[10]="Yanshu";
    char bb[10]="yanshu";
    printf("%d\n",strlen(aa));
    printf("%d",strcmp(aa,bb));
}