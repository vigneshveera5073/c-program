#include<stdio.h>

int main(){
    int num1,num2,num3,temp;
    printf("enter a three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    temp=num1;
    if (temp < num2)
        temp=num2;
    if (temp < num3)
        temp=num3;   
    printf("%d is the greatest",temp);
    return 0;
}