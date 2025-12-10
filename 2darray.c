#include<stdio.h>
int main(){
    int matrix[4][3];
    int row=4;
    int coloum=3;
    for(row=0;row<4;row++){
        for(coloum=0;coloum<3;coloum++)
    
    printf("matrix element is [%d][%d] ",row,coloum);
    scanf("%d",&matrix[row][coloum]);
}
    
}