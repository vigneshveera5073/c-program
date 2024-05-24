#include<stdio.h>
int main(){
    int col,row1,row2,row3,row4,value,value2,limit;
    printf("::");
    scanf("%d",&limit);
    value=limit+1;
    value2=value/2;
    for(col=1;col<=limit;col++){
        if(col > value2){
            for(row1=value2;row1<col;row1++){
                printf(" ");
        }
            for(row2=value;row2>col;row2--){
                printf(" *");
        }

        }
        else{
            for(row4=value2;row4 > col;row4--)
            {
                printf(" ");
            }
            for(row3=0;row3 < col;row3++){
                printf(" *");
            }
                    }

        
        printf("\n");
    }
}