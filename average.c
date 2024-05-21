#include<stdio.h>

int main()
{
    //average of three numbers program!//
    int num1,num2,num3;
    float average,add;
    printf("enter any three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    add=num1+num2+num3;
    average=add/3;
    printf("average is : %f",average);
    return 0;
}
