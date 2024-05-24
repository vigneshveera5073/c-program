#include<stdio.h>

int main(){
    int col,row,limit,dommy=0,medium,center;
    printf("enter colum value: ");
    scanf("%d",&limit);
    center=(limit+1)/2;
    for (col=1;col <= limit;col++)
    {  if(col > center)
        medium--;
       else
        medium=dommy+col;
        for(row=0;row < medium;row++){     
            printf("$");
            }
        printf("\n");
           
            }
    
             }           
    
       
    

