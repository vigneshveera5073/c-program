#include<stdio.h>

int main()
{
    int num1,num2,num3;
    float average,add;
    printf("enter a first number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    add=num1+num2+num3;
    average=add/3;
    printf("you have enter this number : %f",average);
    return 0;
}
