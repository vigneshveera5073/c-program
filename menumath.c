#include<stdio.h>

int main(){
    float num1,num2,result;
    int option;
    printf("Enter a two number : ");
    scanf("%f%f",&num1,&num2);
    printf(":choose the option: \n  addition=1 \n  subraction=2 \n  multiplication=3 \n  dvision=4 \nEnter a your option : ");
    scanf("%d",&option);
    if (option==1)
    {
        result=num1+num2;
        printf("Addition answer is : %f",result);
    }
    else if (option==2)
    {
        result=num1-num2;
        printf("subraction answer is : %f",result);
    }
    else if (option==3)
    {
        result=num1*num2;
        printf("multiplication answer is : %f",result);
    }

    else if (option==4){
        result=num1/num2;
        printf("division answer is : %f",result);
        
    }
    
    else{
        printf(":ERROR: \n  --you enter the wrong option!--");
    }
    
    
}