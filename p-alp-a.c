#include<stdio.h>

int main(){
    int i,j,row,col,value=2,inc,dec,v2;
    row=11;
    col=(row+1)/2;
    dec=col;
    inc=dec;
    v2=col-2;
    for(i=1;i<=col;i++){
        if(value<=i){
            dec--;
            inc++;
        }
        for(j=1;j<=row;j++){              
            if(j==inc || j==dec){
                printf("*");
        }   
            else if(i==v2 && j>2 && j<9){
                printf("*");
            }        
            else{
                printf(" ");
        }
        }
        printf("\n");
    }
}