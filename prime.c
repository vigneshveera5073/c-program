#include<stdio.h>

int main(){
    int num,i,value=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i=2;i<num/2;i++)
    {
        if(num%i==0){
            value=1;
            break;    
        }
    }
    if (value==0){
        printf("%d is a prime number!",num);
    }
    else{
        printf("%d is a not prime number!",num);
    }
}