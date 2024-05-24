#include<stdio.h>

int main(){
    int i,j,row,col,value=2,inc=1,dec;
    printf("enter a number of row only odd num :");
    scanf("%d",&row);
    col=(row+1)/2;
    dec=row;
    for(i=1;i<=col;i++){
        if(value<=i){
            dec--;
            inc++;
        }
        for(j=1;j<=row;j++){              
            if(j==inc || j==dec){
                printf("*");
        }   
            else{
                printf(" ");
        }
        }
        printf("\n");
    }
}