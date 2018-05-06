#include<stdio.h>
int main(){
    struct Student{
        char name[20];
        int rollno;
    };
    struct Student s = {"Rohah",20};
    struct Student *p;
    p = &s; 
    printf("Name: %s",p->name);
    printf("\nRoll no: %d\n",p->rollno);
}