#include<stdio.h>

int main(){
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d \n",i);
        }
    }
}