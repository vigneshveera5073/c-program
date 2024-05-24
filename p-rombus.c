#include<stdio.h>
int main(){
    int col,row,limit=9,row1;
    for(col=1;col<=limit;col++){

        for (row=limit;row > col;row--){
            printf(" ");

        }
        for(row1=1;row1<=limit;row1++ ){
            printf("%d",row1);
        }
        printf("\n");
        
    }
}