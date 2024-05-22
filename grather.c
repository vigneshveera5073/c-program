#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter a two numbers : ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("%d is a grather than to %d !",num1,num2);
    }
    else{
        printf("%d is a grather than to %d !",num2,num1);
    }
    return 0;

}