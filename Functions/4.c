#include<stdio.h>
#include<stdlib.h>
int res[2];

int*  sum(int *num1, int *num2){
    res[0] = num1[0] + num2[0];
    res[1] = num1[1] + num2[1];
    return res;
}

int*  sub(int *num1, int *num2){
    res[0] = num1[0] - num2[0];
    res[1] = num1[1] - num2[1];
    return res;
}

int*  mul(int *num1, int *num2){
    res[0] = num1[0]*num2[0] + (num1[1]*num2[1])*(-1);
    res[1] = num1[0]*num2[1] + num1[1]*num2[0];
    return res;
}

int*  divd(int *num1, int *num2){
    res[0] = num1[0]*num2[0] + (num1[1]*(num2[1] * -1))*(-1);
    res[1] = num1[0]*(num2[1] * -1) + num1[1]*num2[0];
    return res;
}

int main(){
    int num1[2], num2[2];
    int i, *r;
    for(i=0;i<2;i++){
        scanf("%d",&num1[i]);
    }
    for(i=0;i<2;i++){
        scanf("%d",&num2[i]);
    }

    r = sum(num1, num2);
    if(r[1]<0){
        printf("Sum: %d - %di\n",r[0],abs(r[1]));        
    }
    else{
        printf("Sum: %d + %di\n",r[0],r[1]);    
    }

    r = sub(num1, num2);
    if(r[1]<0){
        printf("Sub: %d - %di\n",r[0],abs(r[1]));        
    }
    else{
        printf("Sub: %d + %di\n",r[0],r[1]);    
    }

    r = mul(num1, num2);
    if(r[1]<0){
        printf("Mul: %d - %di\n",r[0],abs(r[1]));        
    }
    else{
        printf("Mul: %d + %di\n",r[0],r[1]);    
    }

    r = divd(num1, num2);
    int nr = num2[0]*num2[0] + num2[1]*num2[1];
    if(r[1]<0){
        printf("Div: (%d - %di) / %d\n",r[0],abs(r[1]),nr);        
    }
    else{
        printf("Div: (%d + %di) / %d\n",r[0],r[1],nr);    
    }

    return 0;
}