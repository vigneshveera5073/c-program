#include<stdio.h>

int main(){
    int i,num,div;
    printf("Enter the number : ");
    scanf("%d",&num);
    div=num%2;
    if(div==0)
    num=num-1;
    for (i=0;i<=num;i++){
        i=i+1;
        printf("%d\n",i);
    }
    return 0;
}