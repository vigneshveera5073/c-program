#include<stdio.h>

int main(){
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if (a>0){
        printf("%d is a positive number!",a);
    }
    else{
        printf("%d is a nagative number!",a);
    }
    return 0;
}