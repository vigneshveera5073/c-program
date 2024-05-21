#include<stdio.h>

int main(){
    //swapping in without third varriable!//
    int a,b;
    printf("Enter a two numbers : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping a two numbers : %d , %d",a,b);
    return 0;
}