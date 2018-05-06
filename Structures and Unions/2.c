#include<stdio.h>
void main(){
    struct stud{
        int roll;
        char name[20];
    }a,b;
    scanf("%s%d",a.name,&a.roll);
    scanf("%s%d",b.name,&b.roll);
    if(a.roll==b.roll){
        if(!(strcmp(a.name,b.name))){
            printf("equal");
        }
        else{
            printf("not equal");
        }
    }
    else{
        printf("not equal");
        
    }
}