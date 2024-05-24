#include<stdio.h>
int main(){
    int col,row,limit,num,row2,re;
    printf("Enter a column : ");
    scanf("%d",&limit);
    re=limit-2;
    for (col=1;col<=limit;col++){
        num=col++;
        re--;
        for (row=0;row < re;row++){
            printf(" ");
            
        }
        for(row=0;row < num;row++){
            printf("$");
        }
        printf("\n");
    }
}