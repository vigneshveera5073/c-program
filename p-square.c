#include<stdio.h>

int main(){
    int j,i,num=5;
    for (i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i > 0 && i < num-1 && j > 0 && j< num-1 )
            {
                printf("  ");
            }
            else{
                printf("$ ");
            }
            
        }
        printf("\n");
    }
}