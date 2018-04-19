/*
*
*
There is a colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbour). Each day, for each cell, if its neighbours are both active or both inactive, the cell becomes inactive the next day, otherwise it becomes active the next day. 
Assumptions:
The two cells on the ends have single adjacent cell, so the other adjacent cell can be assumed to be always inactive.
Even after updating the cell state. consider its previous state for updating the state of other cells. Update the cell information of all cells simultaneously.
Write a function cellCompete which takes takes one 8 element array of integers cells representing the current state of 8 cells and one integer days representing the number of days to simulate.
An integer value of 1 represents an active cell and value of 0 represents an inactive cell.
Test Cases:
Case1:
INPUT: [1,0,0,0,0,1,0,0],1
EXPECTED RETURN VALUE: [0,1,0,0,1,0,1,0]

Case2:
INPUT: [1,1,1,0,1,1,1,1,],2
EXPECTED RETURN VALUE: [0,0,0,0,0,1,1,0]
*
*
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int house, day, i, j;
    scanf("%d%d",&house,&day);   // entry of house and days
    int *cells =(int*)malloc(sizeof(int)*(house+2));
    int *res =(int*)malloc(sizeof(int)*(house+2));
    for(i=1;i<house+1;i++){
        scanf("%d",&cells[i]);
    }
    for(i=1;i<=day;i++){
        for(j=1;j<=house;j++){
            res[j] = cells[j-1] ^ cells[j+1];
        }
        for(j=1;j<=house;j++){
            cells[j] = res[j];
        }
    }
    for(i=1;i<=house;i++){
        printf("%d  ",res[i]);
    }
    return 0;
}
